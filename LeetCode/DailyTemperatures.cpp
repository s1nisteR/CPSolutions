#include <iostream>
#include <vector>
#include <stack>
#include <tuple>

using namespace std;


class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) 
    {
        vector<int> retVal;
        int result[temperatures.size()];
        for(int i = temperatures.size() - 1; i >= 0; i--)
        {
            if(!s.empty() && temperatures[i] < s.top().first)
            {
                result[i] = abs(i - s.top().second);
                s.push(make_pair(temperatures[i], i));
            }
            else
            {
                while(!s.empty() && temperatures[i] >= s.top().first)
                {
                    s.pop();
                }
                if(s.empty())
                {
                    result[i] = 0;
                }
                else
                {
                    result[i] = abs(i - s.top().second);
                }
                s.push(make_pair(temperatures[i], i));
            }
        }
        for(size_t i = 0; i < temperatures.size(); i++)
        {
            retVal.push_back(result[i]);
        }
        return retVal;
    }
private:
    stack<pair<int, int> > s;
};

int main()
{
    vector<int> caseOne = {30, 40, 50, 10, 10, 20};
    Solution sln;
    vector<int> result = sln.dailyTemperatures(caseOne);
    for(auto& x : result)
    {
        cout << x << " ";
    }
    cout << "\n";
    return 0;
}