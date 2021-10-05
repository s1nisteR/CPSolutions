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
    stack<char> st;
    long long n;
    getline(cin, inp);
    n = stoi(inp);
    //getline(cin, inp);
    for(long long i = 0; i < n; ++i)
    {
        getline(cin, inp);
        if(inp == "")
        {
            cout << "Yes" << "\n";
            continue;
        }
        for(auto& x : inp)
        {
            if(x == ')')
            {
                if(!st.empty() && st.top() == '(')
                {
                    st.pop();
                }
                else
                {
                    st.push(x);
                }
            }
            else if(x == ']')
            {
                if(!st.empty() && st.top() == '[')
                {
                    st.pop();
                }
                else
                {
                    st.push(x);
                }
            }
            else
            {
                st.push(x);
            }
        }
        if(!st.empty())
        {
            cout << "No" << "\n";
        }
        else
        {
            cout << "Yes" << "\n";
        }

        st = stack<char>();

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