#include <vector>
#include <iostream>


using namespace std;

class Solution 
{
public:
    bool canJump(vector<int>& nums) 
    {   
        int goal = nums.size() - 1;

        for(int i = nums.size() - 2; i >= 0; i--)
        {
            if(i + nums[i] >= goal)
            {
                goal = i;
            } 
        }
        
        if(goal == 0)
        {
            return true;
        }

        return false;
    }
};


// driver code

int main()
{

    vector<int> nums = {1, 0, 0, 4};
    Solution sln;
    
    cout << sln.canJump(nums) << "\n";

    return 0;
}