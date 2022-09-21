
#include <bits/stdc++.h>

using namespace std;



void solve()
{
    //number of passengers, number of planes
    int n, m, inp;
    int max = 0, min = 0;
    priority_queue<int> q1; //max at top
    priority_queue<int> q2; //min at top
    cin >> n >> m;
    for(int i = 0; i < m; ++i)
    {
        cin >> inp;
        q1.push(inp);
        q2.push(inp * -1);
    }
    for(int i = 0; i < n; ++i)
    {
        //add to max
        int temp;
        temp = q1.top();
        max += temp;
        q1.pop();
        q1.push(temp - 1);

        //add to min
        temp = q2.top() * -1;
        min += temp;
        q2.pop();
        if(temp - 1 == 0) { q2.push(-9999); }
        else { q2.push((temp - 1) * -1); }
    }
    cout << max << " " << min << "\n";
 
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

