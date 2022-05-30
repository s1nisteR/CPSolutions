#include <bits/stdc++.h>

using namespace std;

int n, m;
vector<pair<int, int> > moves = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}}; //up, down, left, right
vector<vector<bool> > visited;

bool isValid(int x, int y)
{
    if(x < 0 || x >= n || y < 0 || y >= m)
    {
        return false;
    }
    if(visited[x][y])
    {
        return false;
    }
    return true;
}


void dfs(int i, int j)
{
    visited[i][j] = true;
    for(auto& x : moves)
    {
        if(isValid(i + x.first, j + x.second))
        {
            dfs(i + x.first, j + x.second);
        }
    }
}


void solve()
{
    int ans = 0;
    char inp;
    cin >> n >> m;
    //initializing visited array
    visited.resize(n);
    for(int i = 0; i < n; ++i)
    {
        visited[i].resize(m);
    }

    //taking input and marking # as already visited
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < m; ++j)
        {
            cin >> inp;
            if(inp == '#')
            {
                visited[i][j] = true;
            }
            else
            {
                visited[i][j] = false;
            }
        }
    }

    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < m; ++j)
        {
            if(!visited[i][j])
            {
                dfs(i, j);
                ++ans;
            }
        }
    }
    cout << ans << "\n";

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