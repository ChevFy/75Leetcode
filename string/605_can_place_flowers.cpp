#include <iostream>
#include <vector>

using namespace	std;

class Solution
{
  public:
	bool canPlaceFlowers(vector<int> &flowerbed, int n)
	{
		int size = flowerbed.size();

		if (n == 0)
			return (true);

		if (size == 1)
		{
			if (flowerbed[0] == 0 && n == 1)
				return (true);
			else
				return (false);
		}

		bool result = false;
		int num = n;
		do
		{
			for (int i = 0; i < size; i++)
			{
				int current_flower = flowerbed[i];
				if (current_flower == 0) // check
				{
					if (i == 0)
					{
						if (flowerbed[i + 1] == 1)
							continue ;
						else
						{
							num--;
							flowerbed[i] = 1;
						}
					}
					else if (i == size - 1)
					{
						if (flowerbed[i - 1] == 1)
							continue ;
						else
						{
							num--;
							flowerbed[i] = 1;
						}
					}
					else
					{
						if (flowerbed[i - 1] == 1 || flowerbed[i + 1] == 1)
							continue ;
						else
						{
							num--;
							flowerbed[i] = 1;
						}
					}
				}
			}
		} while (num > 0 && num == --n);
		if (num <= 0)
			result = true;
		return (result);
	}
};

int	main(void)
{
	Solution sol;
	vector<int> v = {1};
	cout << boolalpha;
	cout << sol.canPlaceFlowers(v, 1) << endl;
}