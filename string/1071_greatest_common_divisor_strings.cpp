#include <iostream>
#include <string>

using namespace std;

class Solution {
public:

    int findGCD(int a, int b){
        int temp;
        while(b != 0)
        {
            temp = b;
            b = a % b;
            a = temp; 
        }
        return a;
    }

    string gcdOfStrings(string str1, string str2) {
        if( str1 + str2 != str2 + str1)
            return NULL;
        int str1_length = str1.length();
        int str2_length = str2.length();
        
        int gcd = findGCD(str2_length,str1_length);
        string result;
        
        for(int i = 0 ; i < gcd; i++)
            result +=  str1[i];
        
        return result;
    }
};

int main(void)
{
    Solution sol;
    
    cout << sol.gcdOfStrings("ABABABAB","ABAB") << endl;
}