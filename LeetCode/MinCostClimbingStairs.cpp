/*
Treat dp[i] as:
If I start from i, how much total cost I need to reach top of stairs.

Also, the problems statement has some issues. Top of stairs is one more after the last element of cost.

*/

#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

class Solution 
{
public:
    int minCostClimbingStairs(vector<int>& cost) 
    {
        int n = cost.size();
        vector<int> dp(n, 0);
        dp[n - 1] = cost[n - 1];
        dp[n - 2] = cost[n - 2];
        for(int i = n - 3; i >= 0; i--)
        {
            dp[i] = cost[i] + min(dp[i + 1], dp[i + 2]);
        }
        return min(dp[0], dp[1]);
    }
};




int main()
{
    Solution sln;
    vector<int> nums = {5, 4, 3, 2, 1};
    cout << sln.minCostClimbingStairs(nums) << "\n";

    return 0;
}