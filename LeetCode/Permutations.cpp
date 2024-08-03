#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//very easy with STL
/*
class Solution 
{
public:
    vector<vector<int>> permute(vector<int>& nums) 
    {
        vector<vector<int> > result;
        sort(nums.begin(), nums.end());     //sorting is a MUST before calling next_permutation
        do
        {
            result.emplace_back(nums);
        } while (next_permutation(nums.begin(), nums.end()));
        return result;
    }

};
*/

//recursive approach without any libraries
class Solution 
{
public:
    vector<vector<int>> permute(vector<int>& nums) 
    {
        n = nums.size();
        _permute(nums, {});
        return result;
    }
private:
    
    vector<vector<int> > result;
    size_t n;

    void _permute(vector<int> searchSpace, vector<int> perm)
    {
        if(perm.size() == n)
        {
            result.emplace_back(perm);
            return;
        }

        for(auto& x : searchSpace)
        {
            if(find(perm.begin(), perm.end(), x) != perm.end()) continue;   //if item already exists in permutation don't add it again
            perm.push_back(x);
            _permute(searchSpace, perm);
            perm.pop_back();    //notice the importance of this!
        }
    }

};


int main()
{
    Solution sln;
    vector<int> nums = { 1, 2, 3 };
    vector<vector<int> > r = sln.permute(nums);
    
    for(auto& x : r)
    {
        for(auto& y : x)
        {
            cout << y << " ";
        }
        cout << "\n";
    }
    

    return 0;
}