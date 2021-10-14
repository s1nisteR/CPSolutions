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

int searcharr(vector<string> arr, string val)
{
    for(unsigned int i = 0; i < arr.size(); ++i)
    {
        if(arr[i] == val)
        {
            return i;
        }
    }
    return -1;
}

void solve()
{
    int n, m;
    string a, b;
    int temp, temp1;
    string result = "";
    vector<string> first;
    vector<string> second;
    vector<string> c;
    cin >> n >> m;
    for(int i = 0; i < m; ++i)
    {
        cin >> a >> b;
        first.push_back(a);
        second.push_back(b);
    }
    for(int i = 0; i < n; ++i)
    {
        cin >> a;
        c.push_back(a);
    }
    for(auto& x : c)
    {
        temp = searcharr(first, x);
        temp1 = searcharr(second, x);
        if(temp != -1) //found in the first word list
        {
            if(first[temp].size() <= second[temp].size())
            {
                result += first[temp] + " ";
            }
            else
            {
                result += second[temp] + " ";
            }
        }
        else if(temp1 != -1) //found in the second word list
        {
            if(first[temp].size() <= second[temp].size())
            {
                result += first[temp] + " ";
            }
            else
            {
                result += second[temp] + " ";
            }
        }
    }

    cout << result << "\n";

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