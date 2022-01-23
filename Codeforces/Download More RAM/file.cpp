#include <bits/stdc++.h>

using namespace std;




void solve()
{
    int n, k, inp;
    vector<int> take;
    vector<int> give;
    vector<pair<int, int> > arr;
    cin >> n >> k;
    long long result = k;
    for(int i = 0; i < n; ++i)
    {
        cin >> inp;
        take.push_back(inp);
    }
    for(int i = 0; i < n; ++i)
    {
        cin >> inp;
        give.push_back(inp);
    }
    for(int i = 0; i < n; ++i)
    {
        arr.push_back(make_pair(take[i], give[i]));
    }

    sort(arr.begin(), arr.end());
    for(auto& x : arr)
    {
        if(result >= x.first)
        {
            result += x.second;
        }
    }
    cout << result << "\n";
    
}



int main()
{

#ifndef ONLINE_JUDGE
    freopen("inputf.in","r",stdin);
    freopen("outputf.in","w",stdout);
#endif

    //Fast IO
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    long long t;
    cin >> t;
    for(long long i = 0; i < t; ++i)
    {
        solve();
    }
    

    //solve();


    return 0;
}