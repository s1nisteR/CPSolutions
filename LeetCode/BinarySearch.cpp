#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        //iterative binary search approach
        int low = 0, high = nums.size() - 1;
        int mid;
        while(low <= high)
        {
            //mid = (low + high) / 2; //this could overflow when (low + high) is done
            mid = low + ((high - low) / 2); //better way of finding mid without overflows
            if(nums[mid] < target)
            {
                low = mid + 1;
            }
            else if(nums[mid] > target)
            {
                high = mid - 1;
            }
            else
            {
                //we have found the element
                return mid;
            }
        }
        return -1;
    }

    int rsearch(vector<int>& nums, int target, int low, int high) {
        //recursive implementation
        if(low <= high)
        {
            int mid = low + (high - low) / 2;
            if(nums[mid] == target) //base case(terminating case)
            {
                return mid;
            }

            if(nums[mid] < target)
            {
                return rsearch(nums, target, mid + 1, high);
            }
            else
            {
                return rsearch(nums, target, low, mid - 1);
            }
        }
        return -1;
    }
};

int main()
{
    Solution sln;
    vector<int> arr = {-1,0,3,5,9,12};
    cout << sln.search(arr, 3) << "\n";
    
    cout << sln.rsearch(arr, 3, 0, arr.size() - 1) << "\n";
    return 0;
}