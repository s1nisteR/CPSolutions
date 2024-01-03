#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, bool> m;
        for(auto& x : nums)
        {
            if(m[x] == true) return true;
            m[x] = true;
        }
        return false;
    }
};


//driver code - do not copy
int main()
{
    vector<int> arr = {1,2,3,1};
    Solution sln;
    cout << sln.containsDuplicate(arr) << "\n";
    return 0;
}