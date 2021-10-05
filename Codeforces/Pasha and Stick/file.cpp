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
    long long inp;
    cin >> inp;
    if(inp % 2 != 0)
    {
        cout << 0 << "\n";
    }
    else
    {
        if(inp % 4 != 0)
        {
            cout << inp / 4 << "\n";
        }
        else
        {
            cout << inp / 4 - 1 << "\n";
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