#include <bits/stdc++.h>

using namespace std;



void solve()
{
    long long inp;
    vector<long long> arr;
    while(cin >> inp)
    {
        arr.push_back(inp);
    }
    for(int i = arr.size() - 1; i >= 0; i--)
    {
        printf("%.4lf\n", sqrt(arr[i]));
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