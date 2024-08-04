#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
#include <algorithm>

using namespace std;

//naive solution that is kinda inefficient
/*
class Solution 
{
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) 
    {
        m_nums = nums;

        search(0);
        return result;
    }
private:
    vector<int> m_nums;
    unordered_map<string, int> subsetCounter; 
    vector<vector<int> > result;
    vector<int> subset;

    string vec2key(vector<int> v)
    {
        string result = "";
        for(auto& x : v)
        {
            result.append(to_string(x) + " ");
        }
        return result;
    }

    void search(int i)
    {
        if(i >= m_nums.size())
        {
            vector<int> payload = subset;
            sort(payload.begin(), payload.end());
            string key = vec2key(payload);
            if(subsetCounter[key] == 0)
            {
                result.emplace_back(subset);
                subsetCounter[key]++;
            }
            return;
        }

        //include m_nums[i]
        subset.push_back(m_nums[i]);
        search(i + 1);

        //do not include m_nums[i]
        subset.pop_back();
        search(i + 1);
    }
};
*/


//bit more efficient solution
class Solution 
{
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) 
    {
        m_nums = nums;
        sort(m_nums.begin(), m_nums.end());
        search(0);
        return result;
    }
private:
    vector<int> m_nums;
    vector<vector<int> > result;
    vector<int> subset;


    void search(int i)
    {
        if(i >= m_nums.size())
        {
            result.emplace_back(subset);
            return;
        }

        //include m_nums[i]
        subset.push_back(m_nums[i]);
        search(i + 1);

        //do not include m_nums[i]
        subset.pop_back();
        while(i < m_nums.size() - 1 && m_nums[i] == m_nums[i + 1])
        {
            i++;
        }
        search(i + 1);

    }
};



int main()
{
    Solution sln;
    vector<int> nums = { 4, 4, 4, 1, 4 };
    
    vector<vector<int> > result = sln.subsetsWithDup(nums);

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