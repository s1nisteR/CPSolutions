
#include <bits/stdc++.h>

using namespace std;

using ll = long long;



void solve()
{
    int X, A, B;
    cin >> X >> A >> B;
    cout << (A + (100 - X) * B) * 10 << "\n";

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

    
    
    long long t;
    cin >> t;
    for(long long i = 0; i < t; ++i)
    {
        solve();
    }
      
    
    //solve();


    return 0;
}

