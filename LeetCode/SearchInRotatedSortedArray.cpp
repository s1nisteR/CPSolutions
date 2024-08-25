#include <vector>
#include <iostream>

using namespace std;



class Solution 
{
public:
    int search(vector<int>& nums, int target) 
    {
        int l = 0, r = nums.size() - 1;
        //if array is already sorted, just do a normal binary search instead
        if(nums[l] < nums[r])
        {
            //do nothing then
        }
        else
        {
            //let's find the pivot(same as finding minimum element in sorted array)
            int _l = 0, _r = nums.size() - 1;
            while(_l <= _r)
            {
                int _mid = (_l + _r) / 2;
                if(nums[_mid] >= nums[0])
                {
                    //then the number belongs to the left portion. to lower it go right
                    _l = _mid + 1;
                }
                else
                {
                    _r = _mid - 1;
                }
            }
            int minElementIndex = _l;

            if(target >= nums[0])
            {
                //you'll find the element in the left portion
                //so search here
                r = minElementIndex - 1;
            }
            else
            {
                //you'll find the element in the right portion
                //so search there
                l = minElementIndex;
            }
        }

        while(l <= r)
        {
            int mid = (l + r) / 2;
            if(target < nums[mid])
            {
                //search to the left
                r = mid - 1;
            }
            else if(target > nums[mid])
            {
                //search to the right
                l = mid + 1;
            }
            else
            {
                return mid;
            }
        }
        return -1;
    }
};


int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 6};
    Solution sln;
    cout << sln.search(nums, 4) << "\n";

    return 0;
}