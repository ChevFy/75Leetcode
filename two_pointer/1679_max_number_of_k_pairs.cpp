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
		while (left < right)
		{
			int find = k - nums[left];
			cout << "find : " << find << endl;
			cout << "left : " << nums[left] << "," << "right : " << nums[right] << endl;
			if (nums[right] < find)
			{
				left++;
				continue ;
			}
			if (nums[right] == find)
			{
				ops++;
				left++;
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
	Solution sol;
	vector<int> nums = {3, 1, 3, 4, 3};
	int res = sol.maxOperations(nums, 6);

	// for (int num : nums)
	// {
	// 	cout << num << " ";
	// }
	// cout << endl;
	cout << "result : " << res << endl;
	return (0);
}