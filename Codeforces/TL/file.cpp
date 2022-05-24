#include <bits/stdc++.h>

using namespace std;



void solve()
{
    int n, m, inp, choice;
    vector<int> a;
    vector<int> b;
    cin >> n >> m;
    for(int i = 0; i < n; ++i)
    {
        cin >> inp;
        a.push_back(inp);
    }
    sort(a.begin(), a.end());
    for(int i = 0; i < m; ++i)
    {
        cin >> inp;
        b.push_back(inp);
    }
    sort(b.begin(), b.end());
    if(a.back() <= 2 * a[0])
    {
        choice = 2 * a[0];
    }
    else
    {
        choice = a.back();
    }
    if(choice >= b[0])
    {
        cout << -1 << "\n";
    }
    else
    {
        cout << choice << "\n";
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