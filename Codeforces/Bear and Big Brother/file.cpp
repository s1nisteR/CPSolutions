#include <bits/stdc++.h>

using namespace std;


void solve()
{
    long long a, b;
    int counter = 0;
    cin >> a >> b;
    while(a <= b)
    {
        a=(3*a);
        b=(2*b);
        counter++;
    }
    cout << counter << "\n";
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