#include <iostream>
#include <vector>

using namespace	std;

class Solution
{
  public:
	bool increasingTriplet(vector<int> &nums)
	{
		int first;
		int second;
		first = nums[0];
		second = INT_MAX;
		for (int n : nums)
		{
			if (n < first)
				first = n;

			if (n > first && n < second)
				second = n;

			if (n > second)
				return (true);
		}
		return (false);
	}
};

int	main(void)
{
	Solution	sol;

	cout << boolalpha;
	vector<int> v = {20, 100, 10, 12, 5, 13};
	cout << sol.increasingTriplet(v);
}

// Runtime
//  0ms
//  Beats100.00%
