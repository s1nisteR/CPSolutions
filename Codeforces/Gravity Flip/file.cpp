#include <bits/stdc++.h>

using namespace std;


void solve()
{
    int n, a;
    cin >> n;
    vector<int> ai;
    for(int i = 0; i < n; ++i)
    {
        cin >> a;
        ai.push_back(a);
    }
    sort(ai.begin(), ai.end());
    for(auto& x : ai)
    {
        cout << x << " ";
    }
    cout << "\n";
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