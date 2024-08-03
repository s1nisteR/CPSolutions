#include <iostream>
#include <vector>


using namespace std;


class Solution 
{
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) 
    {
        m_candidates = candidates;
        m_target = target;
        findCombination({}, 0, 0);
        return result;
    }
private:
    vector<int> m_candidates;
    int m_target;
    vector<vector<int> > result;

    void findCombination(vector<int> comb, int i, int currentSum)
    {
        //define base case
        if(currentSum == m_target)
        {
            result.emplace_back(comb);
            return;
        }
        if(i > (int)(m_candidates.size() - 1) || currentSum > m_target)
        {
            return;
        }

        //include the current element
        comb.push_back(m_candidates[i]);
        findCombination(comb, i, currentSum + m_candidates[i]);

        //never include the current element
        comb.pop_back();
        findCombination(comb, i + 1, currentSum);
  
    }
};


int main()
{
    Solution sln;
    vector<int> candidates = { 2, 3, 5 };
    vector<vector<int>> result = sln.combinationSum(candidates, 8);

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