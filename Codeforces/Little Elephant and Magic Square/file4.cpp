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
    long long arr[3][3];
    long long a;
    long long e;
    long long i;
    long long m;
    long long inp;
    for(int i = 0; i < 3; ++i)
    {
        for(int j = 0; j < 3; ++j)
        {
            cin >> inp;
            arr[i][j] = inp;
        }
    }
    m = (2 * arr[0][2] + 2 * arr[1][2] + arr[0][1] + arr[1][0]) / 2;
    a = m - arr[0][1] - arr[0][2];
    e = m - arr[1][0] - arr[1][2];
    i = m - arr[0][2] - arr[1][2];
    arr[0][0] = a;
    arr[1][1] = e;
    arr[2][2] = i;
    for(int i = 0; i < 3; ++i)
    {
        for(int j = 0; j < 3; ++j)
        {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
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