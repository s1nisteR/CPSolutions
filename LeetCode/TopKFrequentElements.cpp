#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>


using ll = long long;
using namespace std;

/*
//n O(klogn)
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) 
    {
        priority_queue<pair<ll, ll> > q;
        vector<int> result;
        unordered_map<ll, ll> freq;
        for(auto& x : nums)
        {
            freq[x]++;
        }

        for(auto& x : freq)
        {
            q.push(make_pair(x.second, x.first));
        }
        
        for(ll i = 0; i < k; i++)
        {
            result.push_back(q.top().second);
            q.pop();
        }
        return result;
    }
};
*/

//much more efficient, O(n) implementation
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) 
    {
        vector<int> result;
        unordered_map<ll, ll> freq;
        vector<ll> freqCount[nums.size() + 1];
        for(auto& x : nums)
        {
            freq[x]++;
        }
        for(auto& x : freq)
        {
            freqCount[x.second].push_back(x.first);
        }
        int tempK = k;
        for(ll i = nums.size(); i > 0; i--)
        {
            if(freqCount[i].empty()) continue;

            for(auto& z : freqCount[i])
            {
                result.push_back(z);
            }

            if(result.size() == k) break;
        }
        return result;
    }
};

int main()
{
    vector<int> arr = { 1 };
    Solution sln;
    vector<int> result = sln.topKFrequent(arr, 1);
    for(auto& x : result) cout << x << " ";
    cout << "\n";
    return 0;
}