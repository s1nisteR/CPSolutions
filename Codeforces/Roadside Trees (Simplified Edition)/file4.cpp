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
    long long n;
    int h;
    int current = 0;
    int time = 0;
    cin >> n;
    vector<int> height;
    for(long long i = 0; i < n; ++i)
    {
        cin >> h;
        height.push_back(h);
    }
    time += height[0] - current;
    time++;
    for(unsigned int i = 0; i < height.size() - 1; ++i)
    {
        if(height[i + 1] > height[i])
        {
            time++; //jump up
            time += height[i + 1] - height[i];
            time++; //eat the nut
        }
        else if(height[i] == height[i + 1])
        {
            time++; //jump
            time++; //eat
        }
        else
        {
            time += height[i] - height[i + 1];
            time++; //do a jump
            time++; //eat nut
        }

        current = height[i];
    }
    cout << time << "\n";

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