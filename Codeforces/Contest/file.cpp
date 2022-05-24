#include <bits/stdc++.h>

using namespace std;



void solve()
{
    int a, b, c, d, misha, vasya;
    cin >> a >> b >> c >> d;
    misha = max(3 * a / 10, a - (a / 250 * c));
    vasya = max(3 * b / 10, b - (b / 250 * d));
    if(vasya > misha)
    {
        cout << "Vasya" << "\n";
    }
    else if(misha == vasya)
    {
        cout << "Tie" << "\n";
    }
    else
    {
        cout << "Misha" << "\n";
    }

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