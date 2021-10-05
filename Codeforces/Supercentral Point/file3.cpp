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
    int n;
    int x, y;
    int ans = 0;
    int left = 0, right = 0, lower = 0, upper = 0;
    vector<pair<int, int> > arr;
    cin >> n;
    while(n--)
    {
        cin >> x >> y;
        arr.push_back(make_pair(x, y));
    }
    for(auto & x : arr)
    {
        for(unsigned int i = 0; i < arr.size(); ++i)
        {
            if(arr[i].first == x.first && arr[i].second > x.second)
            {
                upper++;
            }
            if(arr[i].first == x.first && arr[i].second < x.second)
            {
                lower++;
            }
            if(arr[i].second == x.second && arr[i].first > x.first)
            {
                right++;
            }
            if(arr[i].second == x.second && arr[i].first < x.first)
            {
                left++;
            }
            if(upper >= 1 && lower >= 1 && right >= 1 && left >= 1)
            {
                ans++;
                break;
            }
        }
        upper = 0;
        lower = 0;
        right = 0;
        left = 0;
    }

    cout << ans << "\n";
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