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
    stack<char> st;
    st.push(' ');
    string s;
    cin >> n >> s;
    for(auto& x : s)
    {
        if(st.top() == '(' && x == ')')
        {
            st.pop();
        }
        else
        {
            st.push(x);
        }
    }

    cout << (st.size() - 1) / 2 << "\n";

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


    long long t;
    cin >> t;
    for(long long i = 0; i < t; ++i)
    {
        solve();
    }


    //solve();


    return 0;
}