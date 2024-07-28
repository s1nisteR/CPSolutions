#include <iostream>
#include <vector>


using namespace std;



class Solution 
{
public:
    vector<vector<int>> subsets(vector<int>& nums) 
    {
        m_nums = nums;
        search(0);
        return result;
    }
private:
    vector<int> m_nums;
    vector<vector<int> > result;
    vector<int> subset;

    void search(int i)
    {
        //base case
        if(i >= m_nums.size()) 
        {
            result.emplace_back(subset);
            return;   
        } 

        //include nums[i]
        subset.push_back(m_nums[i]);
        search(i + 1);

        //do not include nums[i]
        subset.pop_back();
        search(i + 1);
    }
};


int main()
{

    vector<int> nums = {1, 2, 3};
    Solution sln;
    
    vector<vector<int> > result = sln.subsets(nums);

    for(auto& i : result)
    {
        for(auto& j : i)
        {
            cout << j << " ";
        }
        cout << "\n";
    }

    return 0;
}