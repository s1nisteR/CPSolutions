#include <bits/stdc++.h>

using namespace std;




void solve()
{
    string n;
    cin >> n;
    long long result = 0;
    long long sum = 0;
    while(n.size() > 1)
    {
        result++;
        for(auto& x : n)
        {
            sum += x - 48;
        }
        n = to_string(sum);
        sum = 0;
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