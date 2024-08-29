
#include <bits/stdc++.h>

using namespace std;

using ll = long long;



void solve()
{
    unordered_map<int, int> m;
    int n, inp;
    cin >> n;
    bool result = true;

    for(int i = 0; i < n; i++)
    {
        cin >> inp;

        if(i == 0) { m[inp]++; continue; }

        if(m.count(inp - 1) || m.count(inp + 1))
        {
            m[inp]++;
        }
        else
        {
            result = false;
        }
    }
    if(result) cout << "YES" << "\n";
    else cout << "NO" << "\n";
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
