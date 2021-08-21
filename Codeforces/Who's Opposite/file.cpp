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
#include <string.h>
#include <stdlib.h>
#include <assert.h>


using namespace std;



int main(int argc, char** argv) 
{

#ifndef ONLINE_JUDGE
    freopen("inputf.in","r",stdin);
    freopen("outputf.in","w",stdout);
#endif

    //Fast IO
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long t;
    long long a, b, c;
    long long size;
    cin >> t;

    for(long long i = 0; i < t; ++i)
    {
        cin >> a >> b >> c;
        size = abs(a - b) * 2;
        if(size < c || size < a || size < b)
        {
            cout << -1 << "\n";
        }
        else
        {
            if(c + abs(a - b) > size)
            {
                cout << c - abs(a - b) << "\n";
            }
            else
            {
                cout << c + abs(a - b) << "\n";
            }
        }

    }




    return 0;
}