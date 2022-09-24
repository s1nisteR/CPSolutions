
#include <bits/stdc++.h>

using namespace std;

using ll = long long;



void solve()
{
    ll k;
    cin >> k;
    ll n = ceil(sqrt(k));
    ll diff = (n * n) - k;
    if(diff < n)
    {
        cout << n << " " << diff + 1 << "\n";
    }
    else
    {
        cout << n - ((diff - n) + 1) << " " << n << "\n";
    }

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

