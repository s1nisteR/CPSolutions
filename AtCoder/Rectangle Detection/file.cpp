
#include <bits/stdc++.h>

using namespace std;

using ll = long long;

void solve()
{
    vector<string> s;
    bool gotA = false;
    int A = 0, B = 0, C = 0, D = 0;
    string inp;
    for(int i = 0; i < 10; ++i)
    {
        getline(cin, inp);
        if(!gotA && inp.find('#') != string::npos)
        {
            gotA = true;
            A = i + 1; //the row of the first occurrence of #
            C = inp.find('#') + 1; //column of the first occurrence of #
        }
        s.push_back(inp);
    }
    for(int i = A - 1; i < s.size(); ++i)
    {
        if(s[i].find('#') != string::npos)
        {
            B = i + 1; //row of the last occurrence of #
        }
    }
    string temp = s[B - 1];
    for(int i = 0; i < 10; ++i)
    {
        if(temp[i] == '#')
        {
            D = i + 1;
        }
    }
    cout << A << " " <<  B << "\n";
    cout << C << " " << D << "\n";
    
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

