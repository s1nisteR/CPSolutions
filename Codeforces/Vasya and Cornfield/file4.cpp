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
    int n, d, m, x, y;
    cin >> n >> d;
    cin >> m;
    vector<pair<int, int> > arr;
    for(int i = 0; i < m; ++i)
    {
        cin >> x >> y;
        arr.push_back(make_pair(x, y));
    }
    for(auto& x : arr)
    {
        if(x.first + x.second >= d && x.first + x.second <= ((2 * n) - d) && x.first - x.second >= -1 * d && x.first - x.second <= d )
        {
            cout << "YES" << "\n";

        }
        else
        {
            cout << "NO" << "\n";
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