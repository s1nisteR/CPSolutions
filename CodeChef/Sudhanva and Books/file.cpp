#include <bits/stdc++.h>

using namespace std;

stack<long long> shelf;
long long type;


void solve()
{
    cin >> type;
    if(type == 1ll)
    {
        long long n;
        cin >> n;
        shelf.push(n);
    }
    else
    {
        if(shelf.empty())
        {
            cout << "kuchbhi?" << "\n";
        }
        else
        {
            cout << shelf.top() << "\n";
            shelf.pop();
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