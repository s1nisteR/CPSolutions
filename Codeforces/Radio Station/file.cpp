#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <iomanip> 
#include <string.h>
#include <stdlib.h>
#include <assert.h>


using namespace std;




int main() 
{
	
#ifndef ONLINE_JUDGE
    freopen("inputf.in","r",stdin);
    freopen("outputf.in","w",stdout);
#endif
	
    //Fast IO
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int n, m;
    string inp;
    string inp2;
    unordered_map<string, string> state;
    vector<pair<string, string> > command;

    cin >> n >> m;
    for(int i = 0; i < n; ++i)
    {   
        cin >> inp;
        cin >> inp2;

        state[inp2] = inp;
    }

    for(int i = 0; i < m; ++i)
    {
        cin >> inp;
        cin >> inp2;
        command.push_back(make_pair(inp, inp2));
    }

    for(auto& x : command)
    {
        x.second.pop_back();
        cout << x.first << " " << x.second << "; #" << state[x.second] << "\n";
    }
	
    return 0;
}