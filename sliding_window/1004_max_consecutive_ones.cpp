#include <iostream>

using namespace	std;

class Solution
{
  public:
	bool ft_is_all_zero(vector<int> &nums, int size)
	{
		for (int i = 0; i < size; i++)
		{
			if (num[i] != 0)
				return (false);
		}
		return (true);
	}

	int longestOnes(vector<int> &nums, int k)
	{
		int max = 0;
		int cur = 0;
		int size = nums.size();
		int j = 0;
		int count_zero = 0;

		if (!ft_is_all_zero(nums, size))
			return (0);

		for (int i = 0; i < size; i++)
		{
			if (nums[i] == 0)
				count_zero++;
			if (count_zero > k)
			{
				while (j < i)
				{
					if (nums[j] == 0)
					{
						count_zero--;
						j++;
						break ;
					}
					j++;
				}
			}
			cur = i - j + 1;
			if (cur > max)
				max = cur;
		}
		return (max);
	}
};

int	main(void)
{
	Solution	sol;

	vector<int> vec = {1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 0};
	cout << sol.longestOnes(vec, 2) << endl;
}

/*
Runtime
0ms
Beats100.00%
*/