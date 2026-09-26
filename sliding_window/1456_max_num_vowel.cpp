#include <iostream>
#include <vector>

using namespace	std;

class Solution
{
  public:
	bool isVowel(char c)
	{
		if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
			return (true);
		return (false);
	}

	int maxVowels(string s, int k)
	{
		int size = s.size();
		int max_vowels = 0;
		แ
			// initial sliding window
			for (int i = 0; i < k; i++)
		{
			if (isVowel(s[i]))
				max_vowels++;
		}

		// started sliding window
		int cur_vowels = max_vowels;
		for (int i = k; i < size; i++)
		{
			if (isVowel(s[i]))
				cur_vowels++;
			if (isVowel(s[i - k]))
				cur_vowels--;
			if (cur_vowels > max_vowels)
				max_vowels = cur_vowels;
		}
		return (max_vowels);
	};
};

int	main(void)
{
	Solution	sol;

	cout << sol.maxVowels("leetcode", 3);
	return (0);
}

/*
Runtime
1ms
Beats93.36%

*/