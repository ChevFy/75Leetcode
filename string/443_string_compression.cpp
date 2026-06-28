#include <iostream>
#include <string>
#include <vector>

using namespace	std;

class Solution
{
  public:
	int compress(vector<char> &chars)
	{
		int i = 0, count, size = chars.size();
		int write = 0;
		char current_char;
		while (i < size)
		{
			current_char = chars[i];
			count = 0;

			while (i < size && current_char == chars[i])
			{
				i++;
				count++;
			}

			chars[write++] = current_char;
			if (count > 1)
			{
				string num_str = to_string(count);
				for (char c : num_str)
					chars[write++] = c;
			}
		}
		return (write);
	}
};

int	main(void)
{
	Solution sol;
	vector<char> chars = {'a', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b',
		'b', 'c', 'c'};
	cout << sol.compress(chars);
}