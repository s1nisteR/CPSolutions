
#include <bits/stdc++.h>

using namespace std;



void solve()
{
    vector<int> a;
    int time = 0;
    int n, p, x, y, inp;
    cin >> n >> p >> x >> y;
    for(int i = 0; i < n; ++i)
    {
        cin >> inp;
        a.push_back(inp);
    }
    for(int i = 0; i < p; ++i)
    {
        if(a[i] == 1)
        {
            time += y;
        }
        else
        {
            time += x;
        }
    }
    cout << time << "\n";

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

