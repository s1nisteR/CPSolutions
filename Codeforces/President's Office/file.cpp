#include <bits/stdc++.h>

using namespace std;



void solve()
{
    int n, m;
    char c;
    bool lv = true, rv = true, tv = true, bv = true;
    string inp;
    unordered_set<char> result;
    cin >> n >> m >> c;
    vector<char> arr[n];
    vector<pair<int, int> > president;
    for(int i = 0; i < n; ++i)
    {
        cin >> inp;
        for(auto& x : inp)
        {
            arr[i].push_back(x);
        }
    }
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < m; ++j)
        {
            if(arr[i][j] == c)
            {
                president.push_back(make_pair(i, j));
            }
        }
    }
    for(auto& x : president)
    {
        if(x.first - 1 < 0)
        {
            tv = false;
        }
        if(x.first + 1 > n - 1)
        {
            bv = false;
        }
        if(x.second + 1 > m - 1)
        {
            rv = false;
        }
        if(x.second - 1 < 0)
        {
            lv = false;
        }
        if(tv)
        {
            result.insert(arr[x.first - 1][x.second]);
        }
        if(bv)
        {
            result.insert(arr[x.first + 1][x.second]);
        }
        if(lv)
        {
            result.insert(arr[x.first][x.second - 1]);
        }
        if(rv)
        {
            result.insert(arr[x.first][x.second + 1]);
        }
    }
    result.erase('.');
    result.erase(c);
    cout << result.size() << "\n";
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
    
    /*
    long long t;
    cin >> t;
    for(long long i = 0; i < t; ++i)
    {
        solve();
    }
    */

    solve();


    return 0;
}