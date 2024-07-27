#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;


//naive solution using hash table(unordered_map)
/*
class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
        unordered_map<int, int> m;
        for(auto& x : nums)
        {
            m[x]++;
        }
        for(auto& x : nums)
        {
            if(m[x] == 1) return x;
        }
    }
};
*/

//works because if a = b, a^b = 0, now we can do a^b^c^d....^n, where same numbers will be cancelled out
class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
        int result = 0;
        for(auto& x : nums)
        {
            result ^= x;
        }
        return result;
    }
};


int main()
{
    Solution sln;
    vector<int> arr = {1, 1, 1, 2, 2, 2, 6, 6, 6, 5};
    cout << sln.singleNumber(arr) << "\n";
    return 0;
}