#include <bits/stdc++.h>

using namespace std;

void solve()
{
    long long n, m, a, b;
    long long boxes = 0;
    long long result = 0;
    cin >> n >> m;
    vector< pair<long long, long long> > arr;
    for(long long i = 0; i < m; ++i)
    {
        cin >> a >> b; 
        arr.push_back(make_pair(b,a));
    }
    sort(arr.rbegin(), arr.rend());
    for(auto& x : arr)
    {
        for(long long j = 0; j < x.second; ++j)
        {
            boxes++;
            if(boxes > n)
            {
                break;
            }
            result += x.first;
        }
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