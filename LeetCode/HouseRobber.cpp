#include <iostream>
#include <vector>

using namespace std;


/*
class Solution 
{
public:
    int rob(vector<int>& nums) 
    {
        int n = nums.size();
        vector<int> dp(n, 0);
        if(n == 1) return nums[0];  //careful!!!
        dp[0] = nums[0];
        dp[1] = max(nums[0], nums[1]);  //....because of this
        for(int i = 2; i < n; i++)
        {
            dp[i] = max(dp[i - 1], nums[i] + dp[i - 2]);
        }

        return dp[n - 1];
    }
};
*/

//heck, we don't even need the entire dp array lol
//Even better solution
class Solution 
{
public:
    int rob(vector<int>& nums) 
    {
        int n = nums.size();
        int temp;

        if(n == 1) return nums[0];  //careful!!!
        int a = max(nums[1], nums[0]);    //i-1 position of dp array
        int b = nums[0];  //....because of this
        if(n == 2) return a;
        for(int i = 2; i < n; i++)
        {
            temp = max(a, nums[i] + b);
            b = a;
            a = temp;
        }

        return a;
    }
};

int main()
{
    Solution sln;
    vector<int> nums = { 2, 1 };
    cout << sln.rob(nums) << "\n";

    return 0;
}
