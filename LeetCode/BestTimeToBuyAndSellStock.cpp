#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;


//dynamic window sizing, two pointer sliding window method
class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int profit = 0, l = 0, r = 0; //we have our left and right pointers
        while(r < prices.size())
        {
            if(prices[r] > prices[l])
            {
                //if value at right pointer > value at left pointer, calculate max of profit and increase right pointer to keep checking further
                //to the right
                profit = max(profit, prices[r] - prices[l]);
                r++;
            }
            else
            {
                //otherwise the lowest value is the one we now but at
                l = r;
                r++;
            }
        }
        return profit;
    }
};



//this naive O(n^2) solution will have a TLE verdict
//we need to do better
/*
class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int profit = 0;
        for(int i = 0; i < prices.size(); i++)
        {
            for(int j = i + 1; j < prices.size(); j++)
            {
                profit = max(profit, prices[j] - prices[i]);
            }
        }
        return profit;   
    }
};
*/

//driver code - do not copy
int main()
{
    vector<int> prices = {7,6,4,3,1};
    Solution sln;
    cout << sln.maxProfit(prices) << "\n";

}