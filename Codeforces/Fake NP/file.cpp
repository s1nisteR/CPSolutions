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

    long long l, r;

    cin >> l >> r;

    if(l % 2 == 0 && r % 2 != 0 || r % 2 == 0 && l % 2 != 0)
    {
        cout << 2 << "\n";
    }
    else if(r - l == 3)
    {
        cout << 3 << "\n";
    }
    else if(l == r)
    {
        cout << l << "\n";
    }
    else
    {
        cout << 2 << "\n";
    }


    return 0;
}