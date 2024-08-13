#include <iostream>
#include <unordered_set>
#include <string>

using namespace std;


class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        unordered_set<char> characters;
        int l = 0;
        int result = 0;
        for(size_t r = 0; r < s.size(); r++)
        {
            while(characters.find(s[r]) != characters.end())
            {
                characters.erase(s[l]);
                l++;
            }
            characters.insert(s[r]);
            result = max(result, (int)r - l + 1);
        }
        return result;
    }
};


int main()
{
    Solution sln;
    string s = "abcabcbb";
    string s2 = "bbbbb";
    string s3 = "pwwkew";
    cout << sln.lengthOfLongestSubstring(s) << "\n";
    cout << sln.lengthOfLongestSubstring(s2) << "\n";
    cout << sln.lengthOfLongestSubstring(s3) << "\n";

    return 0;
}