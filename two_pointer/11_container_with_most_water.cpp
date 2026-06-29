
#include <iostream>
#include <vector>

using namespace	std;

class Solution
{
  public:
	int maxArea(vector<int> &height)
	{
		int i = 0, j = height.size() - 1;
		int max_area = 0, area;
		while (i < j)
		{
			area = min(height[i], height[j]) * (j - i);
			max_area = max(max_area, area);
			if (height[i] > height[j])
				j--;
			else
				i++;
		}
		return (max_area);
	}
};

int	main(void)
{
	Solution sol;
	vector<int> v = {1, 2, 4, 3};
	cout << sol.maxArea(v) << endl;
}