#include <bits/stdc++.h>

using namespace std;




void solve()
{
    //generate pascal's triangle
    vector<long long> pascal[100 + 1];
    for(int i = 0; i < 100 + 1; ++i)
    {
        pascal[i] = vector<long long>();
    }

    pascal[0].push_back(1);
    pascal[1].push_back(1);
    pascal[1].push_back(1);

    for(int i = 2; i < 100 + 1; ++i)
    {
        pascal[i].push_back(1);
        for(int j = 0; j < i - 1; ++j)
        {
            pascal[i].push_back(pascal[i - 1][j] + pascal[i - 1][j + 1]);
        }
        pascal[i].push_back(1);       
    }

    long long n, m;
    while(cin >> n >> m)
    {
        if(n == 0 && m == 0) break;
        printf("%lld things taken %lld at a time is %lld exactly.\n", n, m, pascal[n][m]);
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