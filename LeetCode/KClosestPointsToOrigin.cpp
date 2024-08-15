#include <vector>
#include <iostream>
#include <queue>
#include <tuple>
#include <cmath>

using namespace std;

class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) 
    {
        vector<vector<int> > result;
        priority_queue<pair<float, vector<int> > > q;
        for(auto& x : points)
        {
            float d = -1.0f * sqrt(x[0]*x[0] + x[1]*x[1]);
            q.push(make_pair(d, x));
        }
        for(int i = 0; i < k; i++)
        {
            result.push_back(q.top().second);
            q.pop();
        }
        return result;
    }
};


int main()
{

    vector<vector<int> > points = {{0, 0}};

    Solution sln;
    vector<vector<int> > result = sln.kClosest(points, 1);
    for(auto& x : result)
    {
        cout << x[0] << "," << x[1] << "\n";
    }

    return 0;
}