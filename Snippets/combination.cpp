//nCr (Binomial Coefficient/Combination) Code Snippet
//By s1nisteR

#include <bits/stdc++.h>

using namespace std;


//===================Code starts from here=================================
#define N 100
vector<long long> pascal[N];

void generatePascal(void)
{
    for(int i = 0; i < N + 1; ++i)
    {
        pascal[i] = vector<long long>();
    }
    pascal[0].push_back(1);
    pascal[1].push_back(1); 
    pascal[1].push_back(1);

    for(int i = 2; i < N + 1; ++i)
    {
        pascal[i].push_back(1);
        for(int j = 0; j < i - 1; ++j)
        {
            pascal[i].push_back(pascal[i - 1][j] + pascal[i - 1][j + 1]);
        }
        pascal[i].push_back(1);   
    }
}

long long nCr(long long n, long long r)
{
    if(r > n) return 0; 
    return pascal[n][r];
}

//Example usage
int main()
{
    //NOTE: WILL RETURN 0 FOR INVALID VALUE, HANDLE AS NECESSARY 
    generatePascal();       //generate pascal's triangle first
    cout << nCr(5, 2);    //use function as such to find needed value
    return 0;
}