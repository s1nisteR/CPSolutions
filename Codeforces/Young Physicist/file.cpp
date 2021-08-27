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
#include <assert.h>


using namespace std;



void solve()
{
    int a, b, c, n;
    int ar = 0, br = 0, cr = 0;
    cin >> n;
    for(int i = 0; i < n; ++i)
    {
        cin >> a >> b >> c;
        ar += a;
        br += b;
        cr += c;
    }
    if(ar == 0 && br == 0 && cr == 0)
    {
        cout << "YES" << "\n";
        return;
    }
    else
    {
        cout << "NO" << "\n";
        return ;
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