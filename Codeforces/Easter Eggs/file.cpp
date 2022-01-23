#include <bits/stdc++.h>

using namespace std;




void solve()
{
    int n;
    cin >> n;
    for(int i = 0; i < floor(n / 7); ++i)
    {
        cout << "ROYGBIV";
    }
    if(n % 7 == 0)
    {
        cout << "";
    }
    else if(n % 7 == 1)
    {
        cout << "G";
    }
    else if(n % 7 == 2)
    {
        cout << "GB";
    }
    else if(n % 7 == 3)
    {
        cout << "YGB";
    }
    else if(n % 7 == 4)
    {
        cout << "YGBI";
    }
    else if(n % 7 == 5)
    {
        cout << "OYGBI";
    }
    else if(n % 7 == 6)
    {
        cout << "OYGBIV";
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