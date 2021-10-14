#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <iomanip>
#include <string.h>
#include <stdlib.h>
#include <unordered_map>
#include <assert.h>

using namespace std;


void solve()
{
    long long n, x, q, m;
    vector<long long> arr;
    vector<long long> arrq;
    
    cin >> n;
    for(long long i = 0; i < n; ++i)
    {
        cin >> x;
        arr.push_back(x);
    }
    sort(arr.begin(), arr.end());
    cin >> q;
    for(long long i = 0; i < q; ++i)
    {
        cin >> m;
        arrq.push_back(m);
    }
    for(auto& x : arrq)
    {
        auto ans = distance(arr.begin(), lower_bound(arr.begin(), arr.end(), x));
        auto ans2 = distance(arr.begin(), upper_bound(arr.begin(), arr.end(), x));
        if(arr[ans] != x && ans == 0)
        {
            cout << 0 << "\n";
        }
        else if(arr[ans] == x)
        {
            cout << max(ans, ans2) << "\n";
        }
        else if(arr[ans] != x && ans != 0)
        {
            cout << ans << "\n";
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