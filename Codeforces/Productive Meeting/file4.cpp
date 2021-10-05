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
    int temp1;
    int temp2;
    int x, y;
    int a;
    int k = 0;
    cin >> n;
    vector<string> result;
    priority_queue<pair<int, int> > pq;
    for(int i = 0; i < n; ++i)
    {
        cin >> a;
        if(a > 0)
        {
            pq.push(make_pair(a, i));
        }
    }
    while(pq.size() > 1)
    {
        k++;
        temp1 = pq.top().first - 1;
        x = pq.top().second;
        pq.pop();

        temp2 = pq.top().first - 1;
        y = pq.top().second;
        pq.pop();
        if(temp1 > 0)
        {
            pq.push(make_pair(temp1, x));
        }
        if(temp2 > 0)
        {
            pq.push(make_pair(temp2, y));
        }
        result.push_back(to_string(x + 1) + " " + to_string(y + 1));

    }
    cout << k << "\n";
    for(auto& o : result)
    {
        cout << o << "\n";
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


    long long t;
    cin >> t;
    for(long long i = 0; i < t; ++i)
    {
        solve();
    }


    //solve();


    return 0;
}