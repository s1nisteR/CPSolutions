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

int comparebits(bitset<32> a, bitset<32> b)
{
    int answer = 0;
    for(int i = 0; i < 32; ++i)
    {
        if(a[i] != b[i])
        {
            answer++;
        }
    }
    return answer;
}


void solve()
{
    int n, m, k;
    int inp;
    int result = 0;
    cin >> n >> m >> k;
    vector<bitset<32> > arr;
    bitset<32> fedor;
    for(int i = 0; i < m; ++i)
    {
        cin >> inp;
        arr.push_back(inp);
    }
    cin >> inp;
    fedor = inp;
    for(auto& x : arr)
    {
        if(comparebits(x, fedor) <= k)
        {
            result++;
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