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
    bool answer = true;
    string s;
    string t;
    cin >> s >> t;
    if(s.size() != t.size())
    {
        answer = false;
    }
    else
    {
        for(unsigned int i = 0; i < s.size(); ++i)
        {
            if(s[i] != t[t.size() - i - 1])
            {
                answer = false;
                break;
            }
        }
    }


    if(answer)
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