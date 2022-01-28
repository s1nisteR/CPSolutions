#include <bits/stdc++.h>

using namespace std;



void solve()
{
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    while(true)
    {
        if(c <= a || a >= c)
        {
            break;
        }
        a = min(a + b, c);
        c = max(c - d, a);
    }
    cout << a << "\n";
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