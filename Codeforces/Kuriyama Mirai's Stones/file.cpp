#include <bits/stdc++.h>

using namespace std;



void solve()
{
    int n, m;
    long long inp;
    int type, l, r;

    vector<long long> arr;
    vector<long long> sorted;
    vector<long long> prefixSum;
    vector<long long> sPrefixSum;
    cin >> n;
    for(int i = 0; i < n; ++i)
    {
        cin >> inp;
        arr.push_back(inp);
    }
    //form sorted array for question of type 2
    sorted = arr;
    sort(sorted.begin(), sorted.end());
    //form our prefix sum arrays
    prefixSum.push_back(arr.front());
    for(int i = 1; i < arr.size(); ++i)
    {
        prefixSum.push_back(prefixSum[i - 1] + arr[i]);
    }
    sPrefixSum.push_back(sorted.front());
    for(int i = 1; i < sorted.size(); ++i)
    {
        sPrefixSum.push_back(sPrefixSum[i - 1] + sorted[i]);
    }
    cin >> m;
    for(int i = 0; i < m; ++i)
    {
        cin >> type >> l >> r;
        if(type == 1)
        {
            if(l == 1)
            {
                cout << prefixSum[r - 1] << "\n";
            }
            else
            {
                cout << prefixSum[r - 1] - prefixSum[l - 2] << "\n";
            }
        }
        else
        {
            if(l == 1)
            {
                cout << sPrefixSum[r - 1] << "\n";
            }
            else
            {
                 cout << sPrefixSum[r - 1] - sPrefixSum[l - 2] << "\n";
            }
        }
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