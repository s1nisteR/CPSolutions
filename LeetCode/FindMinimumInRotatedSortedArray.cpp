#include <vector>
#include <iostream>

using namespace std;




class Solution 
{
public:
    int findMin(vector<int>& nums) 
    {
        int l = 0, r = nums.size() - 1;
        if(nums[l] <= nums[r]) return nums[l]; 
        while(l <= r)
        {
            int middle = (l + r) / 2;
            if(nums[middle] >= nums[0])
            {
                //search to the right portion for smaller values
                l = middle + 1;
            }
            else
            {
                //search to the left portion
                r = middle - 1;
            }           
        }
        return nums[l];
    }
};


int main()
{

    vector<int> nums = {4,5,6,7,0,1,2};
    Solution sln;

    cout << sln.findMin(nums) << "\n";

    return 0;
}