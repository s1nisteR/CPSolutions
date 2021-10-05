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
    int inp;
    int a, b;
    vector<int> arr;
    cin >> n;
    for(int i = 0; i < n; ++i)
    {
        cin >> inp;
        arr.push_back(inp);
    }
    int minimal = abs(arr.front() - arr.back()); 
    a = 0;
    b = arr.size() - 1;
    
    for(unsigned int i = 0; i < arr.size() - 1; ++i)
    {
        if(abs(arr[i] - arr[i + 1]) < minimal)
        {
            minimal = abs(arr[i] - arr[i + 1]);
            a = i;
            b = i + 1;
        }
    }
    cout << a + 1 << " " << b + 1 << "\n";

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