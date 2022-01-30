#include <bits/stdc++.h>

using namespace std;

long long rangeSum(const vector<long long>& prefixSum, long long& l, long long& r)
{
    if(l == 1)
    {
        return prefixSum[r - 1];
    }
    else
    {
        return prefixSum[r - 1] - prefixSum[l - 2];
    }
}


void solve()
{
    long long n, k, inp;
    long long l, r;
    long long lowestIndex = 0;
    long long currentValue;
    vector<long long> arr;
    vector<long long> prefixSum;
    vector<long long> ppSum;
    cin >> n >> k;
    for(long long i = 0; i < n; ++i)
    {
        cin >> inp;
        arr.push_back(inp);
    }
    prefixSum.push_back(arr.front());
    for(long long i = 1; i < n; ++i)
    {
        prefixSum.push_back(prefixSum[i - 1] + arr[i]);
    }
    for(long long i = 1; i <= n - k + 1; ++i)
    {
        l = i;
        r = i -1 + k;
        ppSum.push_back(rangeSum(prefixSum, l, r));
    }
    currentValue = ppSum.front();
    for(long long i = 1; i < ppSum.size(); ++i)
    {
        if(ppSum[i] < currentValue)
        {
            currentValue = ppSum[i];
            lowestIndex = i;
        }
    }
    cout << lowestIndex + 1 << "\n";
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