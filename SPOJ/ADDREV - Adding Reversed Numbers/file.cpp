#include <bits/stdc++.h>

using namespace std;





void solve()
{
    string a, b;
    string str;
    long long result;
    cin >> a >> b;
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    result = stoll(a) + stoll(b);
    str = to_string(result);
    reverse(str.begin(), str.end());
    //revert back to number to take care of leading zeroes
    result = stoll(str);
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
    
    long long t;
    cin >> t;
    for(long long i = 0; i < t; ++i)
    {
        solve();
    }
    

    //solve();


    return 0;
}