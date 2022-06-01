#include <bits/stdc++.h>

using namespace std;


void solve()
{
    long long n, d, inp, ans = 0ll;
    vector<long long> arr;
    cin >> n >> d;
    for(long long i = 0; i < n; ++i)
    {
        cin >> inp;
        arr.push_back(inp);
    }
    sort(arr.begin(), arr.end());
    for(long long i = 0; i < n - 1; ++i)
    {
        if(arr[i + 1] - arr[i] <= d)
        {
            ans++;
            i++;
        }
    }

    cout << ans << "\n";
    
}


int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
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