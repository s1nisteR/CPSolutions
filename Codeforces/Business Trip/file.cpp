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
#include <assert.h>


using namespace std;



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


    int k, inp;
    cin >> k;
    vector<int> v;
    for(int i = 0; i < 12; ++i)
    {
        cin >> inp;
        v.push_back(inp);
    }

    sort(v.rbegin(), v.rend());
    bool possible = true;
    int i = 0;
    int current = k;
    while(current > 0)
    {
        if(i == v.size())
        {
            cout << -1 << "\n";
            possible = false;
            break;
        }
        current -= v.at(i);
        i++;
    }

    if(possible)
        cout << i << "\n";

    return 0;
}