#include <string>
#include <unordered_map>
#include <algorithm>
#include <iostream>

using namespace std;



class Solution 
{
public:
    int characterReplacement(string s, int k) 
    {
        unordered_map<char, int> charCounts;
        int l = 0, result = 0, maxFreq = 0;
        for(int r = 0; r < s.size(); r++)
        {
            charCounts[s[r]]++;
            maxFreq = max(maxFreq, charCounts[s[r]]);
            //not valid
            //then keep moving left till it's valid
            while(((r - l) + 1) - maxFreq > k)
            {
                charCounts[s[l]]--;
                l++;
            }
            result = max((r - l) + 1, result);
        }
        return result;     
    }
};


int main()
{
    Solution sln;
    cout << sln.characterReplacement("ABAB", 2) << "\n";

    
    return 0;
}