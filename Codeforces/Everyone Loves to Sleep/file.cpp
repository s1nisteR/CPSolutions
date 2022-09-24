
#include <bits/stdc++.h>

using namespace std;

using ll = long long;

bool bothSortAscending(const pair<int, int>& p1, const pair<int, int>& p2)
{
    return tie(p1.first, p1.second) < tie(p2.first, p2.second);
}

void solve()
{
    vector<pair<int, int> > alarms;
    int n, H, M, h, m;
    int day = 0;
    cin >> n >> H >> M;
    int currentH = H, currentM = M;
    for(int i = 0; i < n; ++i)
    {
        cin >> h >> m;
        alarms.push_back({h, m});
    }
    bool ring = false;
    while(!ring)
    {
        for(auto& x : alarms)
        {
            if(x.first == currentH && x.second == currentM)
            {
                ring = true;
                if(currentM - M < 0) //if minutes negative
                {
                    cout << currentH - 1 + (24 * day) - H << " ";
                    cout << currentM + 60 - M << "\n";
                    break;
                }
                else
                {
                    cout  << (currentH + (24 * day) - H) << " ";
                    cout << currentM - M << "\n";
                    break;
                }

            }
        }
        //clock simulation
        currentM++;
        if(currentM == 60)
        {
            currentH++;
            currentM = 0;
        }
        if(currentH == 24)
        {
            day++;
            currentH = 0;
            currentM = 0;
        }
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

    
    
    long long t;
    cin >> t;
    for(long long i = 0; i < t; ++i)
    {
        solve();
    }
        
    
    //solve();


    return 0;
}

