#include <iostream>
#include <string>
#include <unordered_map>


using namespace std;


class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> m;
        unordered_map<char, int> m2;
        for(auto& x : s)
        {
            m[x]++;
        }
        for(auto& x : t)
        {
            m2[x]++;
        }
        for(auto& x : m)
        {
            if(x.second != m2[x.first]) return false;
        }
        for(auto& x : m2)
        {
            if(x.second != m[x.first]) return false;
        }
        return true;
    }
};


//driver code do not copy
int main()
{
    Solution sln;
    string s = "cat";
    string t = "car";
    cout << sln.isAnagram(s, t) << "\n";
    return 0;
}