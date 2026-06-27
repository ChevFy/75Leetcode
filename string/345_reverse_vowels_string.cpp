#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    string reverseVowels(string s) {
        string vowels = "aeiou";
        string temp ;
        string result = s;
        unsigned int i;
        for(i = 0 ; s[i] != '\0' ; i++)
        {
            for(unsigned int j = 0 ; vowels[j] != '\0'; j++)
            {
                if(tolower(s[i]) == vowels[j])
                {
                    temp += s[i];
                    break;
                }
            }
        }
        int temp_index = temp.length() - 1;
        
        for(i = 0 ; result[i] != '\0' ; i++)
        {
             for(unsigned int j = 0 ; vowels[j] != '\0'; j++)
            {
                if(tolower(result[i]) == vowels[j])
                {
                    result[i] = temp[temp_index--];
                    break;
                }
            }
        }
        return result;
    }
};

int main(void)
{
    Solution sol;
    sol.reverseVowels("IceCreAm");
    return 0;
}

//Runtime
// 3ms
// Beats35.14%