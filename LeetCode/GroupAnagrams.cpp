#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map>

using namespace std;


 
class Solution {
public:
    vector<vector<string> > groupAnagrams(vector<string>& strs) 
    {
        unordered_map<string, vector<string> > groups;
        vector<vector<string> > result;
        for(auto& x : strs)
        {
            string key = x; sort(key.begin(), key.end());
            groups[key].push_back(x);
            
        }
        for(auto& i : groups)
        {
            result.emplace_back(i.second);
        }
        return result;
    }
};


int main()
{
    vector<string> strs = {"ac", "d"};
    Solution sln;
    vector<vector<string> > result = sln.groupAnagrams(strs);
    for(auto& x : result)
    {
        for(auto& y : x)
        {
            cout << y << " ";
        }
        cout << "\n";
    }

    return 0;
}