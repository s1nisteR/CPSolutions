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
    bool magic = true;
    string inp;
    cin >> inp;
    for(unsigned int i = 0; i < inp.size(); ++i)
    {
        if(inp.size() == 1 && inp[0] != '1')
        {
            magic = false;
            break;
        }
        else if(inp[i] == '1' && inp[i + 1] != '4')
        {
            continue;
        }
        else if(inp[i] == '1' && inp[i + 1] == '4' && inp[i + 2] != '4')
        {
            i++;
            continue;
        }
        else if(inp[i] == '1' && inp[i + 1] == '4' && inp[i + 2] == '4')
        {
            i += 2;
            continue;
        }
        else
        {
            magic = false;
            break;
        }
    }
    if(magic)
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