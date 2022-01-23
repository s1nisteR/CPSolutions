#include <bits/stdc++.h>

using namespace std;

void solve()
{
    long long l, r, k;
    long long odd = 0;
    cin >> l >> r >> k;
    if(l == r && l != 1)
    {
        cout << "YES\n";
    }
    else if(l == r && l == 1)
    {
        cout << "NO\n";
    }
    else
    {
        if(l % 2 != 0) //if lower limit is odd
        {
            l -= 1;
        }
        if(r % 2 != 0) //if upper limit is odd
        {
            r += 1;
        }
        odd = (r - l) / 2;
        if(odd > k)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
        }
    }
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