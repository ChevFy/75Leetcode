#include <iostream>
#include <string>
#include <vector>

using namespace	std;

class Solution
{
  public:
	vector<int> productExceptSelf(vector<int> &nums)
	{
		int size = nums.size();
		vector<int> prefix(size);
		vector<int> suffix(size);
		vector<int> result(size);

		prefix[0] = 1;
		suffix[size - 1] = 1;
		int num = 1;
		for (int i = 1; i < size; i++)
		{
			num *= nums[i - 1];
			prefix[i] = num;
		}

		num = 1;
		for (int i = size - 2; i >= 0; i--)
		{
			num *= nums[i + 1];
			suffix[i] = num;
		}

		for (int i = 0; i < size; i++)
		{
			result[i] = suffix[i] * prefix[i];
		}
		return (result);
	}
};

int	main(void)
{
	Solution sol;
	vector<int> v = {1, 2, 3, 4};
	for (int r : sol.productExceptSelf(v))
	{
		cout << r << endl;
	}
}