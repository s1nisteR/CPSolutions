#include <bits/stdc++.h>

using namespace std;



void solve()
{
    long long n, inp;
    vector<long long> arr;
    long long l = 0, r = 0;
    cin >> n;
    for(long long i = 0; i < n; ++i)
    {
        cin >> inp;
        arr.push_back(inp);
    } 
    if(arr.size() <= 2 && is_sorted(arr.begin(), arr.end()))
    {
        cout << "yes\n1 1\n";
        return;
    }
    else if(is_sorted(arr.begin(), arr.end()))
    {
        cout << "yes\n1 1\n";
        return;
    }
    for(long long i = 0; i < arr.size() - 1; ++i)
    {
        if(arr[i] <= arr[i + 1])
        {
            l++;
        }
        else
        {
            break;
        }
    }
    r = arr.size() - 1;
    for(long long i = arr.size() - 1; i >= 1; i--)
    {
        if(arr[i - 1] <= arr[i])
        {
            r--;
        }
        else
        {
            break;
        }
    }
    reverse(arr.begin() + l, arr.end() - (arr.size() - 1 - r));
    if(is_sorted(arr.begin(), arr.end()))
    {
        cout << "yes" << "\n";
        cout << l + 1 << " " << r + 1 << "\n";
    }
    else
    {
        cout << "no" << "\n";
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