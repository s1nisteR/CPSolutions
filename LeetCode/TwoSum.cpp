#include <vector>
#include <unordered_map>
#include <stdlib.h>
#include <iostream>

using namespace std;


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;
        vector<int> result;
        for(long long i = 0; i < nums.size(); ++i)
        {
            if(m.count(target - nums[i])) //we did find it then
            {
                result.push_back(i);
                result.push_back(m[target - nums[i]]);
                return result;  //break and return here once found
            }
            else
            {
                m[nums[i]] = i;
            }
        }   
        return result;
    }
};

//driver code - do not copy
int main()
{
    vector<int> arr = {3, 2, 4};
    int target = 6;
    Solution sln;
    arr = sln.twoSum(arr, target);
    for(auto& x : arr)
    {
        cout << x << "\n";
    }

}