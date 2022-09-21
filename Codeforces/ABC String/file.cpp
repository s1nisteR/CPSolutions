
#include <bits/stdc++.h>

using namespace std;



void solve()
{
    string inp;
    int counter = 0;
    array<string, 6> out;
    cin >> inp;


    for(auto& x : inp)
    {
        if(x == 'A')
        {
            out[0].push_back('(');
        }
        if(x == 'B')
        {
            out[0].push_back('(');
        }
        if(x == 'C')
        {
            out[0].push_back(')');
        }
        
    }
    for(auto& x : inp)
    {
        if(x == 'A')
        {
            out[1].push_back('(');
        }
        if(x == 'B')
        {
            out[1].push_back(')');
        }
        if(x == 'C')
        {
            out[1].push_back('(');
        }
        
    }
    for(auto& x : inp)
    {
        if(x == 'A')
        {
            out[2].push_back(')');
        }
        if(x == 'B')
        {
            out[2].push_back('(');
        }
        if(x == 'C')
        {
            out[2].push_back('(');
        }
        
    }
    for(auto& x : inp)
    {
        if(x == 'A')
        {
            out[3].push_back(')');
        }
        if(x == 'B')
        {
            out[3].push_back(')');
        }
        if(x == 'C')
        {
            out[3].push_back('(');
        }
        
    }
    for(auto& x : inp)
    {
        if(x == 'A')
        {
            out[4].push_back(')');
        }
        if(x == 'B')
        {
            out[4].push_back('(');
        }
        if(x == 'C')
        {
            out[4].push_back(')');
        }
        
    }
    for(auto& x : inp)
    {
        if(x == 'A')
        {
            out[5].push_back('(');
        }
        if(x == 'B')
        {
            out[5].push_back(')');
        }
        if(x == 'C')
        {
            out[5].push_back(')');
        }
        
    }
    for(auto& x : out)
    {
        for(auto& y : x)
        {
            if(y == '(') { counter++; }
            else { counter--; }
            if(counter < 0)
            {
                break;
            }
        }
        if(counter == 0)
        {
            cout << "YES" << "\n";
            return;
        }
        counter = 0;
    }
    cout << "NO" << "\n";
 
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

