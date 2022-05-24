#include <bits/stdc++.h>

using namespace std;



void solve()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    double p = (double)a / (double)b;
    double q = (1.0f - (double)a/b) * (1.0f - (double)c/d);
    cout << fixed << setprecision(12) << (double)p / (1.0 - (double)q) << "\n";
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