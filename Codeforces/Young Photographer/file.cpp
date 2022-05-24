#include <bits/stdc++.h>

using namespace std;



void solve()
{
    int n, a, b, x, m, M;
    vector<pair<int, int> > arr;
    cin >> n >> x;
    for(int i = 0; i < n; ++i)
    {
        cin >> a >> b;
        arr.push_back(make_pair(min(a, b), max(a, b)));
    }
    m = arr[0].first;
    for(auto& x : arr)
    {
        if(x.first > m)
        {
            m = x.first;
        }
    }
    M = arr[0].second;
    for(auto& x : arr)
    {
    
        if(x.second < M)
        {
            M = x.second;
        }
    }
    if(m > M)
    {
        cout << -1 << "\n";
        return;
    }
    if(x < m)
    {
        cout << m - x << "\n";
    }
    else if(x > M)
    {
        cout << x - M << "\n";
    }
    else
    {
        cout << 0 << "\n";
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