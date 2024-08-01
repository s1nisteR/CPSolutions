#include <iostream>
#include <vector>
#include <climits>


using namespace std;
using ll = long long;

class Solution 
{
public:
    int maxSubArray(vector<int>& nums) 
    {
        int sum = 0;
        int result = INT_MIN;
        for(auto& x : nums)
        {
            sum += x;
            result = max(result, sum);
            if(sum < 0)
            {
                sum = 0;
            }
        }
        return result;
    }
};


int main()
{
    vector<int> nums = {5,4,-1,7,8};

    Solution sln;
    cout << sln.maxSubArray(nums) << "\n";

    return 0;
}