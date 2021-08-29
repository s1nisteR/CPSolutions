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


bool isPrime(long long n)
{
    if(n < 2)
        return false;
    for(long long i = 2; i*i <= n; i++)
    {
        if(n % i == 0)
            return false;
    }
    return true;
}


void solve()
{
    int k;
    cin >> k;

    string num;
    long long result = 0;
    cin >> num;
    for(int i = 0; i < k; ++i)
    {
        if(!isPrime(num[i] - (int)'0'))
        {
            cout << 1 << "\n";
            cout << num[i] << "\n";
            return;
        }
    }
    for(int i = 0; i < k; ++i)
    {
        for(int j = i + 1; j < k; ++j)
        {
            result = (num[i] - '0') * 10 + (num[j] - '0');
            if(!isPrime(result))
            {
                cout << 2 << "\n";
                cout << result << "\n";
                return;
            }
        }
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

    int t;
    cin >> t;
    for(int i = 0; i < t; ++i)
    {
        solve();
    }



    return 0;
}