#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, m, inp;
    int result = 0;
    vector<int> arr;
    cin >> n >> m;
    for(int i = 0; i < n; ++i)
    {
        cin >> inp;
        arr.push_back(inp);
    }
    sort(arr.begin(), arr.end());
    int i = 0;
    while(arr[i] < 0 && i < m)
    {
        result += arr[i];
        i++;
    }
    cout << result * -1 << "\n";
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