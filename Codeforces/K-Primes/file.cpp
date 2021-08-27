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


    //Use short bruteforce when k < 100
    //Direct No, if k >= 100
    //This is because frequency of primes will decrease largely
    long long l, k;
    cin >> l >> k;

    if(l != 2)
    {
        cout << "No" << "\n";
    }
    else if(l == 2 && k <= 3)
    {
        cout << "Yes" << "\n";
    }
    else
    {
        cout << "No" << "\n";
    }

    return 0;
}