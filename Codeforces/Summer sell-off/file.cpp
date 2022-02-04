#include <bits/stdc++.h>

using namespace std;

bool sortbyboth(const pair<long long, long long>& a, const pair<long long, long long>& b)
{
    return make_pair(a.first, a.second) < make_pair(b.first, b.second);
}


void solve()
{
    long long n, f, k, l;
    long long result = 0;
    
    vector<long long> ki;
    vector<long long> li;
    
    vector<pair<long long, long long> > arr;
    cin >> n >> f;
    for(long long i = 0; i < n; ++i)
    {
        cin >> k >> l;
        ki.push_back(k);
        li.push_back(l);
    }
    for(long long i = 0; i < ki.size(); ++i)
    {
        arr.push_back(make_pair(min(2 * ki[i], li[i]) - min(ki[i], li[i]), i));
    }
    sort(arr.rbegin(), arr.rend());
    for(long long i = 0; i < f; ++i)
    {
        ki[arr[i].second] *= 2;
    }
    for(long long i = 0; i < ki.size(); ++i)
    {
        result += min(ki[i], li[i]);
    }
    cout << result << "\n";
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