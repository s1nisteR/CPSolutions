#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;



/*
class Solution {
public:
    int trap(vector<int>& height) 
    {
        int leftMax = 0, rightMax = 0, ans = 0;
        vector<int> mLArr(height.size(), 0);
        vector<int> mRArr(height.size(), 0);
        vector<int> minArr(height.size(), 0);

        for(size_t i = 0; i < height.size(); i++)
        {
            mLArr[i] = leftMax;
            if(height[i] > leftMax) leftMax = height[i];
        }
        for(size_t i = height.size() - 1; i > 0; i--)
        {
            mRArr[i] = rightMax;
            if(height[i] > rightMax) rightMax = height[i];
        }
        for(size_t i = 0; i < height.size(); i++)
        {
            minArr[i] = min(mLArr[i], mRArr[i]);
        }
        for(size_t i = 0; i < height.size(); i++)
        {
            int area = minArr[i] - height[i];
            if(area < 0) continue;
            ans += area;
        }
        return ans;
    }
};
*/


//Far more efficient solution
class Solution {
public:
    int trap(vector<int>& height) 
    {
        int l = 0, r = height.size() - 1, maxLeft = height[l], maxRight = height[r], ans = 0;
        while(l < r)
        {
            if(maxLeft < maxRight)
            {
                l++;
                maxLeft = max(maxLeft, height[l]);
                ans += maxLeft - height[l];
            }
            else
            {
                r--;
                maxRight = max(maxRight, height[r]);
                ans += maxRight - height[r];
            }
        }
        return ans;
    }
};

int main()
{
    vector<int> height = {0,1,0,2,1,0,1,3,2,1,2,1};
    Solution sln;
    cout << sln.trap(height) << "\n";

    return 0;
}