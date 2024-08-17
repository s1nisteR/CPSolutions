#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) 
    {
        vector<vector<int> > result;
        sort(nums.begin(), nums.end());
        int a, b, c, l, r;
        for(size_t i = 0; i < nums.size() - 2; i++)
        {
            if(i > 0 && nums[i] == nums[i - 1]) continue;   //avoiding duplicates
            a = nums[i];
            l = i + 1;
            r = nums.size() - 1;

            while(l < r)
            {
                b = nums[l];
                c = nums[r];
                if(a + b + c < 0)
                {
                    l++;
                }
                else if(a + b + c > 0)
                {
                    r--;
                }
                else
                {
                    result.push_back({a, b, c});

                    //avoiding duplicates
                    while(l < r && nums[l] == b) l++;
                    while(l < r && nums[r] == c) r--;
                }
            }
            
        }
        return result;
    }   
};


int main()
{

    vector<int> nums = {-1,0,1,2,-1,-4};
    Solution sln;
    vector<vector<int> > result = sln.threeSum(nums);

    for(auto& x : result)
    {
        for(auto& y : x)
        {
            cout << y << " ";
        }
        cout << "\n";
    }
    return 0;
}