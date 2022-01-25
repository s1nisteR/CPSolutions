#include <bits/stdc++.h>

using namespace std;

long long gcd(long long a, long long b)
{
    if(b == 0) return a;
    return gcd(b, a % b);
}


void solve()
{
    long long n;
    long long inp;
    long long success = 0;
    long long total = 0;
    vector<long long> arr;
    while(cin >> n)
    {
        if(n == 0) break;
        for(int i = 0; i < n; ++i)
        {
            cin >> inp;
            arr.push_back(inp);
        }
        sort(arr.begin(), arr.end());
        for(long long m = 0; m < arr.size(); ++m)
        {
            for(long long k = m + 1; k < arr.size(); ++k)
            {
                total++;
                if(gcd(arr[m], arr[k]) == 1)
                {
                    success++;
                }
            }
        }

        if(success != 0)
        {
            cout << fixed << setprecision(6) << sqrt((6.0f * (double)total) / (double)success) << "\n";
        }
        else
        {
            cout << "No estimate for this data set." << "\n";
        }
        
        success = 0;
        total = 0;
        arr = vector<long long>();
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