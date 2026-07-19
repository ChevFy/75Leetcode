#include <iostream>
#include <vector>

using namespace	std;

class Solution
{
  public:
	double findMaxAverage(vector<int> &nums, int k)
	{
		double sum = 0;
		int size = nums.size();

		for (int i = 0; i < k; i++)
			sum += nums[i];
		double best_avg = sum / k;
		double avg = 0;
		for (int i = k; i < size; i++)
		{
			sum += nums[i] - nums[i - k];
			avg = sum / k;
			if (avg > best_avg)
				best_avg = avg;
		}
		return (best_avg);
	}
};

int	main(void)
{
	Solution	sol;
	int			k;

	vector<int> nums = {1, 12, -5, -6, 50, 3};
	k = 4;
	cout << "best avg : " << sol.findMaxAverage(nums, k);
}

/*
Runtime
0ms
Beats100.00%

*/