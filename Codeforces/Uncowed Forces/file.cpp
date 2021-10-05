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
    int inp;
    int pointval = 500;
    int sh;
    int ush;
    float score = 0.0f;
    vector<int> m;
    vector<int> w;
    for(int i = 0; i < 5; ++i)
    {
        cin >> inp;
        m.push_back(inp);
    }
    for(int i = 0; i < 5; ++i)
    {
        cin >> inp;
        w.push_back(inp);
    }
    cin >> sh >> ush;
    for(int i = 0; i < 5; ++i)
    {
        score += max(0.3f * pointval, ((1.0f - m.at(i) / 250.0f) * pointval - (50.0f * w.at(i))));
        pointval += 500;
    }
    score += 100 * sh;
    score -= 50 * ush;
    cout << score << "\n";

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