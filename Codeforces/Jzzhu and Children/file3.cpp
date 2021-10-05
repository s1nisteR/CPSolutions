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
    int n, m;
    cin >> n >> m;
    int inp;
    vector<pair<int , int> > arr;

    for(int i = 0; i < n; ++i)
    {
        cin >> inp;
        arr.push_back(make_pair(inp, i));
    }

    while(arr.size() != 0)
    {
        for(unsigned int i = 0; i < arr.size(); ++i)
        {
            if(arr[i].first > m) //send to the end of the line
            {
                arr.push_back(make_pair(arr[i].first - m, arr[i].second));
                arr.erase(arr.begin() + i);
                break;
            }
            else    //SEN'D them hope
            {
                if(arr.size() <= 1)
                {
                    cout << arr[0].second + 1 << "\n";
                    return;
                }
                arr.erase(arr.begin() + i);
                break;
            }
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