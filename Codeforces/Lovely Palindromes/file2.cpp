#include <bits/stdc++.h>

using namespace std;

void solve()
{
    
    string inp;
    cin >> inp;
    string result = inp;
    for(int i = inp.size() - 1; i >= 0; i--)
    {
        result.push_back(inp[i]);
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