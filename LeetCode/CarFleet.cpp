#include <vector>
#include <iostream>
#include <tuple>
#include <algorithm>
#include <stack>

using namespace std;


class Solution 
{
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) 
    {
        vector<pair<int, int> > cars;
        stack<float> s;
        for(size_t i = 0; i < position.size(); i++)
        {
            cars.push_back({position[i], speed[i]});
        }
        sort(cars.begin(), cars.end());


        for(int i = cars.size() - 1; i >= 0; i--)
        {
            s.push((((float)target - (float)cars[i].first) / (float)cars[i].second));

            //check the first two element of stack
            if(s.size() >= 2)
            {
                float topOfStack = s.top();
                s.pop();
                float secondToTop = s.top();

                if(topOfStack <= secondToTop)
                {
                    continue;
                }
                s.push(topOfStack);
            }
                
        }
        return s.size();
    }
};


int main()
{
    Solution sln;
    vector<int> pos = {0, 2, 4};
    vector<int> speed = {4, 2, 1};
    cout << sln.carFleet(100, pos, speed) << "\n";
    return 0;
}