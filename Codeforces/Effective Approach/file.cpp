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
    long long m;
    long long index;
    long long vasya = 0ll;
    long long petya = 0ll;
    long long b;
    cin >> n;
    long long inp;
    unordered_map<long long, long long> umap;
    for(long long i = 0ll; i < n; ++i)
    {
        cin >> inp;
        umap[inp] = i; 
    }
    cin >> m;
    for(long long i = 0; i < m; ++i)
    {
        cin >> b;
        vasya += umap[b] + 1ll;
        petya += n - umap[b];
    }
    cout << vasya << " " << petya << "\n";


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