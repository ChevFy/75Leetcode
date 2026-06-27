#include <iostream>
#include <string>
#include <vector>

using namespace	std;

class Solution
{
  public:
	int findMax(vector<int> &candies, int size)
	{
		int max = candies[0];
		for (int i = 1; i < size; i++)
		{
			if (candies[i] >= max)
				max = candies[i];
		}
		return (max);
	}

	vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies)
	{
		vector<bool> result;
		int size = candies.size();
		int max = findMax(candies, size);
		for (int i = 0; i < size; i++)
		{
			if (candies[i] + extraCandies >= max)
				result.push_back(true);
			else
				result.push_back(false);
		}
		return (result);
	}
};

int	main(void)
{
	Solution	sol;

	vector<int> v = {2, 3, 5, 1, 3};
	for (bool res : sol.kidsWithCandies(v, 3))
	{
		cout << res << " ";
	}
	cout << endl;
}

// Runtime
// 0ms
// Beats100.00%
