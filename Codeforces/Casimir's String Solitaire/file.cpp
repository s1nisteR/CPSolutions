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
    string s;
    int t;
    int a = 0;
    int b = 0;
    int c = 0;
    int temp;
    cin >> t;

    for(int i = 0; i < t; ++i)
    {
        cin >> s;

        //do stuff here
        for(auto& x : s)
        {
            if(x == 'A')
            {
                a++;
            }
            else if(x == 'B')
            {
                b++;
            }
            else if(x == 'C')
            {
                c++;
            }
        }
        temp = b - a;
        if(a == b && b == c)
        {
            cout << "NO" << "\n";
        }
        else if((a == b && c == 0) || (b == c && a == 0))
        {
            cout << "YES" << "\n";
        }
        else if(temp <= 0)
        {
            cout << "NO" << "\n";
        }
        else if(temp == c)
        {
            cout << "YES" << "\n";
        }
        else
        {
            cout << "NO" << "\n";
        }
        a = 0;
        b = 0;
        c = 0;
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