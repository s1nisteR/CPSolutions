
#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int ave(const vector<int>& arr)
{
    int result = 0;
    for(auto& x : arr)
    {
        result += x;
    }
    result = round((float)result / arr.size());
    return result;
}

void solve()
{
    int n, inp, counter = 0;
    cin >> n;
    vector<int> arr;
    for(int i = 0; i < n; ++i)
    {
        cin >> inp;
        arr.push_back(inp);
    }
    while(ave(arr) != 5)
    {
        sort(arr.begin(), arr.end());
        arr[0] = 5;
        counter++;
    }
    cout << counter << "\n";
    


}

    
    
int main()
{
#ifndef ONLINE_JUDGE
    (void)!freopen("input.txt","r",stdin);
    (void)!freopen("output.txt","w",stdout);
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

