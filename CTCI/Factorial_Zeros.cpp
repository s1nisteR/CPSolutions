#include <iostream>

using namespace std;

#define LL long long


LL fact(LL i, LL memo[])
{
    if(i <= 1) return 1;
    if(memo[i] != 0) return i * memo[i];
    memo[i] = i * fact(i - 1, memo);
    return memo[i];
}

LL countTrailingZeros(LL i)
{
    LL trailingZCount = 0;
    while(i % 10 == 0)
    {
        trailingZCount++;
        i /= 10;
    }   
    return trailingZCount;
}

int main()
{
    LL memo[1000] = { 0 };
    LL i = fact(15, memo);
    cout << i << "\n";
    cout << countTrailingZeros(i) << " trailing zeros!"<< "\n";

    return 0;
}