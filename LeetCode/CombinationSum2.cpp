#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) 
    {
        m_candidates = candidates;
        m_target = target;
        sort(m_candidates.begin(), m_candidates.end());
        backtrack({}, 0, 0);
        return result;
    }

private:
    vector<int> m_candidates;
    int m_target;
    vector<vector<int> > result;

    void backtrack(vector<int> stateCandidates, int i, int currentSum)
    {
        if(currentSum == m_target)
        {
            result.emplace_back(stateCandidates);
            return;
        }
        if(i > (int)m_candidates.size() - 1 || currentSum > m_target)
        {
            return;
        }

        //include that element and search further
        stateCandidates.push_back(m_candidates[i]);
        backtrack(stateCandidates, i + 1, currentSum + m_candidates[i]);

        //search further without including that element
        stateCandidates.pop_back();

        while(i < m_candidates.size() - 1 && m_candidates[i] == m_candidates[i + 1]) i++;
        backtrack(stateCandidates, i + 1, currentSum);
    }
};


int main()
{
    vector<int> nums = {1, 2};
    Solution sln;
    vector<vector<int> > result = sln.combinationSum2(nums, 3);
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