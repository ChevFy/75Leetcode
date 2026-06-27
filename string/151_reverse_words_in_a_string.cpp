#include <iostream>
#include <string>
#include <vector>

using namespace	std;

class Solution
{
  public:
	string reverseWords(string s)
	{
		vector<string> temps;
		string temp_str;
		string result;

		unsigned int i = 0;

		while (s[i] == ' ' && s[i] != '\0')
			i++;

		for (int index = i; s[index] != '\0'; index++)
		{
			while (s[index] != ' ' && s[index] != '\0')
			{
				temp_str += s[index];
				index++;
			}

			temps.push_back(temp_str);
			temp_str.clear();

			while (s[index] == ' ' && s[index] != '\0')
				index++;
			index--;
		}
		int size = temps.size();
		result += temps[size - 1];
		for (int j = size - 2; j >= 0; j--)
		{
			result += ' ';
			result += temps[j];
		}
		return (result);
	}
};

int	main(void)
{
	Solution	sol;

	cout << sol.reverseWords("a good   example");
}

// Runtime
//  0ms
//  Beats100.00%
