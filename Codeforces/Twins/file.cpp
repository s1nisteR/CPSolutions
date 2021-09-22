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

int sumRemaining(vector<int> arr)
{
    int result = 0;
    for(auto& x : arr)
    {
        result += x;
    }
    return result;
}


void solve()
{
    int n;
    cin >> n;
    int counter = 0;
    int othersum = 0;
    int yourSum = 0;
    int inp;
    vector<int> coins;
    for(int i = 0; i < n; ++i)
    {
        cin >> inp;
        coins.push_back(inp);
    }
    sort(coins.begin(), coins.end());
    do
    {
        counter++;
        yourSum += coins.back();
        coins.pop_back();
        othersum = sumRemaining(coins);
    }while(yourSum <= othersum);

    cout << counter << "\n";

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