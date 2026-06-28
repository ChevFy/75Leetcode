
#include <iostream>
#include <vector>

using namespace	std;

class Solution
{
  public:
	bool isSubsequence(string s, string t)
	{
		int len = s.size();
		int i = 0;

		for (int j = 0; t[j] != '\0'; j++)
		{
			if (s[i] == t[j])
				i++;
		}

		if (i == len)
			return (true);
		return (false);
	}
};

// Runtime
// 0ms
// Beats100.00%
