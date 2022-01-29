#include <bits/stdc++.h>

using namespace std;



void solve()
{
    long long n, l;
    long long inp;
    double answer;
    double fromStart, fromEnd;
    double largest;
    vector<long long> differenceArray; 
    differenceArray.push_back(0);
    vector<long long> arr;
    cin >> n >> l;
    for(long long i = 0; i < n; ++i)
    {
        cin >> inp;
        arr.push_back(inp);
    }
    sort(arr.begin(), arr.end());
    fromStart = arr[0] - 0.0;
    fromEnd = (double)l - (double)arr.back();
    for(long long i = 0; i < arr.size() - 1; ++i)
    {
        differenceArray.push_back(arr[i + 1] - arr[i]);
    }
    sort(differenceArray.begin(), differenceArray.end());
    largest = differenceArray.back() / 2.0;
    answer = (double)max(fromStart, max(fromEnd, largest));
    printf("%.10lf\n", answer);
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