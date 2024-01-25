#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

inline bool isAlpNum(char c)
{
    if((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
    {
        return true;
    }
    return false;
}


class Solution {
public:
    bool isPalindrome(string s) {
        int high = s.size() - 1, low = 0;

        while(low < high)
        {
            if(!isAlpNum(s[low]))
            {
                low++;
                continue;
            }
            if(!isAlpNum(s[high]))
            {
                high--;
                continue;
            }
            if(isAlpNum(s[low]) && isAlpNum(s[high]))
            {
                if(tolower(s[low]) != tolower(s[high])) return false;
                low++;
                high--;
            }
        }
        return true;
    }
};


int main()
{
    Solution sln;
    cout << sln.isPalindrome("A man, a plan, a canal: Panama") << "\n";
    cout << sln.isPalindrome("race a car") << "\n";
    cout << sln.isPalindrome(" ") << "\n";

    return 0;
}
