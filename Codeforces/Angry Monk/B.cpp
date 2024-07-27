
#include <bits/stdc++.h>

using namespace std;

using ll = long long;



void solve()
{
    ll n, k, sum = 0, decomp = 0;
    ll inp;
    vector<ll> kArr;
    cin >> n >> k;
    for(ll i = 0; i < k; i++)
    {
        cin >> inp;
        kArr.push_back(inp);
    }

    sort(kArr.begin(), kArr.end());

    for(ll i = 0; i < kArr.size() - 1; i++)
    {
        sum += kArr[i];
        decomp += kArr[i] - 1;
    }

    cout << sum + decomp << "\n";

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
