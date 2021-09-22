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
    string inp;
    cin >> inp;

    bool h = false;
    bool e = false;
    bool l1 = false;
    bool l2 = false;
    bool o = false;

    for(auto& x : inp)
    {
        if(x == 'h' && h == false)
        {
            h = true;
        }
        else if(x == 'e' && h == true)
        {
            e = true;
        }
        else if(x == 'l' && l1 == true)
        {
            l2 = true;
        }
        else if(x == 'l' && e == true)
        {
            l1 = true;
        }
        else if(x == 'o' && l2 == true)
        {
            o = true;
        }
    }
    if(h && e && l1 && l2 && o)
    {
        cout << "YES" << "\n";
    }
    else
    {
        cout << "NO" << "\n";
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