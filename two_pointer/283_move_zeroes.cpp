#include <iostream>
#include <vector>

using namespace	std;

class Solution
{
  public:
	void moveZeroes(vector<int> &nums)
	{
		// count zero
		int size = nums.size();
		int zero = 0, non_zero = 1;

		while (zero < size - 1 && non_zero < size)
		{
			if (nums[zero] == 0)
			{
				if (nums[non_zero] != 0)
				{
					int temp = nums[zero];
					nums[zero] = nums[non_zero];
					nums[non_zero] = temp;
					zero++;
					non_zero++;
				}
				else
					non_zero++;
			}
			else
			{
				zero++;
				non_zero++;
			}
		}
	}
};

int	main(void)
{
	Solution	sol;

	vector<int> v = {0, 1, 0, 3, 4};
	sol.moveZeroes(v);
	for (int n : v)
	{
		cout << " " << n;
	}
}

// Runtime
//  0ms
//  Beats100.00%
