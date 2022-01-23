#include <bits/stdc++.h>

using namespace std;




void solve()
{
    string inp;
    map<char, int> a;
    vector<pair<int, char> > b;
    a['A'] = 0;
    a['B'] = 0;
    a['C'] = 0;
    for(int i = 0; i < 3; ++i)
    {
        cin >> inp;
        if(inp[1] == '>')
        {
            a[inp[0]] += 1;
        
        }
        else
        {
            a[inp[2]] += 1;
        }        
    }
    if(a['A'] == a['B'] || a['A'] == a['C'] || a['B'] == a['C'])
    {
        cout << "Impossible";
    }
    else
    {
        b.push_back(make_pair(a['A'], 'A'));
        b.push_back(make_pair(a['B'], 'B'));
        b.push_back(make_pair(a['C'], 'C'));
        sort(b.begin(), b.end());
        for(auto& x : b)
        {
            cout << x.second;
        }
    }
    cout << "\n";
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