#include <bits/stdc++.h>

using namespace std;



void solve()
{
    long long ans = 0;
    map<long long, long long> freq;
    long long n, a;
    vector<long long> arr;
    cin >> n;
    for(long long i = 0; i < n; ++i)
    {
        cin >> a;
        arr.push_back(a);
    }
    for(auto x : arr)
    {
        freq[x]++;
    }
    for(auto x : freq)
    {
        ans += min(x.first - 1, x.second);
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
    
    
    long long t;
    cin >> t;
    for(long long i = 0; i < t; ++i)
    {
        solve();
    }
    
    
    //solve();


    return 0;
}