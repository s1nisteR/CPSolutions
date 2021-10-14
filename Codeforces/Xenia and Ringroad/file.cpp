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
    long long n, m;
    long long inp;
    long long result = 0;
    long long initial = 1;
    cin >> n >> m;
    vector<long long> arr;
    for(long long i = 0; i < m; ++i)
    {
        cin >> inp;
        arr.push_back(inp);
    }
    for(auto& x : arr)
    {
        if(x >= initial)
        {
            result += x - initial;
            initial = x;
        }
        else
        {
            result += n - (initial - x);
            initial = x;
        }
    }
    cout << result << "\n";
    

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