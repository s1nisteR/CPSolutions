
#include <bits/stdc++.h>

using namespace std;

using ll = long long;



void solve()
{
    ll n;
    ll ans = 2e9;
    ll inp;
    vector<ll> a;
    cin >> n;
    for(ll i = 0; i < n; ++i)
    {
        cin >> inp;
        a.push_back(inp);
    }    
    sort(a.begin(), a.end());
    for(int i = 2; i < a.size(); ++i)
    {
        ans = min(ans, a[i] - a[i - 2]);
    }
    cout << ans << "\n";
}

    
    
int main()
{
#ifndef ONLINE_JUDGE
    (void)!freopen("input.txt","r",stdin);
    (void)!freopen("output.txt","w",stdout);
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

