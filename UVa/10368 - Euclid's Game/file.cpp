#include <bits/stdc++.h>

using namespace std;



void solve()
{
    long long a, b;
    while(true)
    {
        bool player = false; //false means Stans, true means Ollie
        cin >> a >> b;
        if(a == 0 && b == 0)
        {
            break;
        }
        if(b > a) { swap(a, b); }
        while(true)
        {
            if(a % b == 0 || a / b > 1)
            {
                if(player == false)
                {
                    cout << "Stan wins\n";
                }
                else
                {
                    cout << "Ollie wins\n";
                }
                break;
            }
            a %= b;
            swap(a, b);        
            player = !player;
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