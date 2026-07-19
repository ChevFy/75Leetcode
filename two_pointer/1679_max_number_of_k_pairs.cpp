#include <algorithm>
#include <cstddef>
#include <iostream>
#include <vector>

using namespace	std;

class Solution
{
  public:
	int maxOperations(vector<int> &nums, int k)
	{
		sort(nums.begin(), nums.end());
		cout << "start :\n";
		for (int num : nums)
		{
			cout << num << " ";
		}
		cout << endl;
		int size = nums.size();
		int left = 0, right = size - 1;
		int ops = 0;
		int find = k - nums[left];
		while (left < right)
		{
			cout << "find : " << find << endl;
			cout << "left : " << nums[left] << "," << "right : " << nums[right] << endl;
			if (nums[right] < find)
			{
				left++;
				find = k - nums[left];
				continue ;
			}
			if (nums[right] == find)
			{
				ops++;
				left++;
				find = k - nums[left];

				right--;
				continue ;
			}
			right--;
		}
		return (ops);
	}
};

int	main(void)
{
	Solution	sol;
	int			res;

	vector<int> nums = {1, 2, 3, 4};
	res = sol.maxOperations(nums, 5);
	// for (int num : nums)
	// {
	// 	cout << num << " ";
	// }
	// cout << endl;
	cout << "result : " << res << endl;
	return (0);
}

/*
Runtime
84ms
Beats81.66%
 */