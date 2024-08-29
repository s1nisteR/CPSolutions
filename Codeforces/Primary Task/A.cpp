#include <bits/stdc++.h>

using namespace std;

using ll = long long;


void solve()
{
    int inp;
    cin >> inp;
    string s = to_string(inp);

    if(s.size() < 3)
    {
        cout << "NO" << "\n";
        return;
    }

    if(s.size() == 3)
    {
        if(s[0] == '1' && s[1] == '0' && s[2] >= '2')
        {
            cout << "YES" << "\n";
            return;
        }
        cout << "NO" << "\n";
        return;
    }

    if(s.size() > 3)
    {
        if(s[0] == '1' && s[1] == '0' && s[2] > '0')
        {
            cout << "YES" << "\n";
            return;
        }
        cout << "NO" << "\n";
        return;
    }

}

    
    
int main()
{
#ifndef ONLINE_JUDGE
    (void)!freopen("input.txt","r",stdin);
    (void)!freopen("output.txt","w",stdout);
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
