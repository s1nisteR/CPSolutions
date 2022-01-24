#include <bits/stdc++.h>

using namespace std;

long long BigMod(long long B, long long P, long long M)
{
    long long R = 1;
    while(P > 0)
    {
        if(P % 2 != 0)
        {
            R = (R * B) % M;
        }
        P /= 2;
        B = (B * B) % M;
    }
    return R;
}


void solve()
{
    long long b, p, m;
    string emp;
    while(cin >> b >> p >> m)
    {
        cout << BigMod(b, p, m) << "\n";
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