#include <bits/stdc++.h>

using namespace std;



void solve()
{
    int n;
    string inp;
    cin >> n >> inp;
    if(n > 2)
    {
        cout << "NO" << "\n";
    }
    else if(n == 2)
    {
        if(inp[0] == inp[1])
        {
            cout << "NO" << "\n";
        }
        else
        {
            cout << "YES" << "\n";
        }
    }
    else
    {
        cout << "YES" << "\n";
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