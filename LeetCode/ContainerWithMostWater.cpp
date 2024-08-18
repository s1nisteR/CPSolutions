#include <iostream>
#include <vector>

using namespace std;



class Solution 
{
public:
    int maxArea(vector<int>& height) 
    {
        int result = 0;
        int l = 0, r = height.size() - 1;
        while(l < r)
        {
            result = max(result, (min(height[l], height[r]) * (r - l)));
            if(height[l] < height[r])
            {
                l++;
            }
            else
            {
                r--;
            }
        }
        return result;
    }
};


int main()
{
    vector<int> nums = {2,3,4,5,18,17,6};
    Solution sln;
    cout << sln.maxArea(nums) << "\n";
    return 0;
}