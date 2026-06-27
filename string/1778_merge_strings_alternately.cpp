
#include <iostream>
#include <string>

using namespace	std;

class Solution
{
  public:
	string mergeAlternately(string word1, string word2)
	{
		string result;
		unsigned int i = 0;
        int word1_length = word1.length();
        int word2_length = word2.length();
        while( i < word1_length || i < word2_length)
        {
            if ( i < word1_length )
                result += word1[i];
            if ( i < word2_length )
                result += word2[i];
            i++;
        }
        return result;
	}
};

int	main(void)
{
	Solution sol; 
	string ans = sol.mergeAlternately("bxjegbjccjjxfnss", "earbsgsofyw");
	cout << ans << endl; 
	return (0);
}

// Runtime
// 0ms
// Beats100.00%
