#include <bits/stdc++.h>

using namespace std;




void solve()
{
    int n;
    string inp;
    string result = "";
    cin >> n >> inp;
    for(int i = n - 1; i >= 0; i--)
    {
        result.insert(result.begin() + result.size() / 2, 1, inp[i]);
    }
    cout << result << "\n";
    
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