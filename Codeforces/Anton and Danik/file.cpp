#include <bits/stdc++.h>

using namespace std;


void solve()
{
    long long n;
    cin >> n;
    int anton = 0, danik = 0;
    string inp;
    cin >> inp;
    for(auto& x : inp)
    {
        if(x == 'A')
        {
            anton++;
        }
        else
        {
            danik++;
        }
    }
    if(anton > danik)
    {
        cout << "Anton\n";
    }
    else if(anton < danik)
    {
        cout << "Danik\n";
    }
    else
    {
        cout << "Friendship\n";
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