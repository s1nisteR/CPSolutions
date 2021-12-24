#include <bits/stdc++.h>

using namespace std;


void solve()
{
    int n, h, inp;
    int ans = 0;
    cin >> n >> h;
    vector<int> heights;
    for(int i = 0; i < n; ++i)
    {
        cin >> inp;
        heights.push_back(inp);
    }
    for(int i = 0; i < n; ++i)
    {
        if(heights[i] > h)
        {
            ans+=2;
        }
        else
        {
            ans++;
        }
    }
    cout << ans << "\n";
    
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