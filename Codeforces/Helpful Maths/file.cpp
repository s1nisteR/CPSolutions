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
    string out = "";
    cin >> inp;
    vector<int> arr;
    for(auto& x : inp)
    {
        if(x == '1')
        {
            arr.push_back(1);
        }
        else if(x == '2')
        {
            arr.push_back(2);
        }
        else if(x == '3')
        {
            arr.push_back(3);
        }
    }
    sort(arr.begin(), arr.end());
    out.push_back((char)'0' + arr.at(0));
    for(unsigned int i = 1; i < arr.size(); ++i)
    {
        out.push_back('+');
        out.push_back((char)'0' + arr.at(i));
    }
    cout << out << "\n";
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