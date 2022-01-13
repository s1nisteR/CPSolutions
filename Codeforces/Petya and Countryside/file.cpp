#include <bits/stdc++.h>

using namespace std;


void solve()
{
    int n;
    int inp;
    int current = 0;
    int right = 0, left = 0;
    cin >> n;
    vector<int> arr;
    for(int m = 0; m < n; ++m)
    {
        cin >> inp;
        arr.push_back(inp);
    }
    for(int i = 0; i < arr.size(); ++i)
    {
        //check right direction
        for(int j = i + 1; j < arr.size(); ++j)
        {
            if(arr[j] > arr[j - 1])
            {
                break;
            }
            right++;
        }
        
        //check left direction
        for(int k = i - 1; k >= 0; k--)
        {
            if(arr[k] > arr[k + 1])
            {
                break;
            }
            left++;
        }
        current = max(current, (right + left));
        right = 0;
        left = 0;
    }
    cout << current + 1 << "\n";
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