#include <bits/stdc++.h>

using namespace std;


void solve()
{
    int n;
    map<string, int> freq;
    vector<pair<string, string> > names;
    string first, last;
    cin >> n;
    for(int i = 0; i < n; ++i)
    {
        cin >> first >> last;
        names.push_back({first, last});
        freq[first]++;
    }
    for(auto& x : names)
    {
        if(freq[x.first] > 1)
        {
            cout << x.first << " " << x.second << "\n";
        }
        else
        {
            cout << x.first << "\n";
        }
    }
    
}


int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif

    //Fast IO
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    
    long long t;
    cin >> t;
    for(long long i = 0; i < t; ++i)
    {
        solve();
    }
    

    //solve();


    return 0;
}