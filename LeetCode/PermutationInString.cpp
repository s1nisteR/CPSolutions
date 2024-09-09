#include <string>
#include <unordered_map>
#include <iostream>

using namespace std;


class Solution 
{
public:
    bool checkInclusion(string s1, string s2) 
    {
        bool allExists = true;
        unordered_map<char, int> m;
        unordered_map<char, int> comparer;
        for(auto& x : s1)
        {
            m[x]++;
        }
        
        long unsigned int l  = 0, r = s1.size() - 1;
        while(r <= s2.size() - 1)
        {
            comparer.clear();
            for(long unsigned int i = l; i <= r; i++)
            {
                comparer[s2[i]]++;
            }

            for(auto& x : comparer)
            {
                if(m[x.first] != x.second) allExists = false;
            }

            if(allExists) return true;
            
            allExists = true;
            l++;
            r++;

        }
        return false;
    }
};


int main()
{
    Solution sln;
    cout << sln.checkInclusion("hello", "ooolleooolleh") << "\n";

    return 0;
}