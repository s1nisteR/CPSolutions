//Problem 8.1

#include <iostream>

using namespace std;

typedef long long ll;

//raw approach
ll countWaysR(ll n)
{
    if(n < 0) return 0;
    if(n == 0) return 1;
    return countWaysR(n - 1) + countWaysR(n - 2) + countWaysR(n - 3);
}


//top-down DP approach(memoization)
ll countWays(ll n, ll memo[])
{
    if(n < 0) return 0;
    if(n == 0) return 1;
    if(memo[n] != 0) return memo[n];
    memo[n] = countWays(n - 1, memo) + countWays(n - 2, memo) + countWays(n - 3, memo);
    return memo[n];
}


//bottom-up DP approach
ll countWaysB(ll n)
{
    ll a = 1;
    ll b = 1;
    ll c = 2;
    ll result;
    if(n < 0) return 0;
    if(n >= 0 && n < 2) return 1;
    if(n == 2) return 2;

    for(ll i = 3; i <= n; ++i)
    {
        result = a + b + c;
        a = b;
        b = c;
        c = result;
    }
    return result;
}


int main()
{
    cout << countWaysR(10) << "\n"; //raw method

    //top-down DP approach
    ll memo[100] = { 0 };
    cout << countWays(10, memo) << "\n";

    //bottom-up DP approach
    cout << countWaysB(10) << "\n";
    return 0;
}