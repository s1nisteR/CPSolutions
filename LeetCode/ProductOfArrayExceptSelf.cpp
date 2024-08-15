#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


/*
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) 
    {
        vector<int> prefix;
        prefix.push_back(1);
        vector<int> suffix;
        suffix.push_back(1);
        vector<int> result;
        for(int i = 0; i < nums.size() - 1; i++)
        {
            prefix.push_back(prefix[i] * nums[i]);
        }
        for(int i = nums.size() - 1; i > 0; i--)
        {
            suffix.push_back(suffix[nums.size() - 1 - i] * nums[i]);
        }
        reverse(suffix.begin(), suffix.end());
        for(int i = 0; i < prefix.size(); i++)
        {
            result.push_back(prefix[i] * suffix[i]);
        }
        return result;
    }
};
*/


//Solution in O(1) space complexity (output array is not considered during space complexity)
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) 
    {
        int suffix = 1;
        int prefix = 1;
        vector<int> result;
        for(int i = 0; i < (int)nums.size(); i++)
        {
            result.push_back(prefix);
            prefix *= nums[i];
        }
        for(int i = nums.size() - 1; i >= 0; i--)
        {
            result[i] *= suffix;
            suffix *= nums[i];
        }
        return result;

    }
};


int main()
{
    vector<int> nums = {-1,1,0,-3,3}; 
    Solution sln;
    vector<int> result = sln.productExceptSelf(nums);
    for(auto& x : result)
    {
        cout << x << " ";
    }
    cout << "\n";

    return 0;
}