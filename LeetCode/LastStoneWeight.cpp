#include <iostream>
#include <vector>
#include <queue>

using namespace std;


class Solution 
{
public:
    int lastStoneWeight(vector<int>& stones) 
    {
        int x, y; //where y > x
        for(auto& x : stones)
        {
            m_q.push(x);
        }
        while(m_q.size() > 1)
        {
            y = m_q.top();
            m_q.pop();
            x = m_q.top();
            m_q.pop();

            if(y - x == 0) continue;
            m_q.push(y - x);
        }
        if(m_q.size() == 0) return 0;
        return m_q.top();
    }
private:
    priority_queue<int> m_q;
};

int main()
{
    vector<int> stones = {50, 60, 60};
    Solution sln;
    cout << sln.lastStoneWeight(stones) << "\n";

    return 0;
}