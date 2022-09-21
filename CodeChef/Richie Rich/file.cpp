
#include <bits/stdc++.h>

using namespace std;



void solve()
{
    int a, b, x;
    int counter = 0;
    cin >> a >> b >> x;
    while(a < b)
    {
        a += x;
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

    
    
    long long t;
    cin >> t;
    for(long long i = 0; i < t; ++i)
    {
        solve();
    }
    
    
    //solve();


    return 0;
}

