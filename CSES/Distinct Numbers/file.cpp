#include <bits/stdc++.h>

using namespace std;



void solve()
{
    long long n;
    long long inp;
    unordered_set<long long> arr;
    cin >> n;
    for(long long i = 0; i < n; ++i)
    {
        cin >> inp;
        arr.insert(inp);
    }
    cout << arr.size() << "\n";
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