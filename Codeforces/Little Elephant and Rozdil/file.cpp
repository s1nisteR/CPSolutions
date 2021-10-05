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
    long long n;
    long long inp;
    vector<pair<long long, long long> > arr;
    cin >> n;
    for(long long i = 0; i < n; ++i)
    {
        cin >> inp;
        arr.push_back(make_pair(inp, i + 1));
    }
    sort(arr.begin(), arr.end());
    if(arr[0].first == arr[1].first)
    {
        cout << "Still Rozdil" << "\n";
    }
    else
    {
        cout << arr[0].second << "\n";
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