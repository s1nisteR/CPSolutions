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
    
    int t;
    cin >> t;
    string team;
    string judge;
    string nospaces;
    std::cin.ignore();
    for(int i = 0; i < t; ++i)
    {
        getline(cin, team, '\n');
        getline(cin, judge, '\n');
        for(auto& x : team)
        {
            if(x != ' ')
            {
                nospaces.push_back(x);
            }
        }
        if(team == judge)
        {
            cout << "Case " << i + 1 << ": " << "Yes" << "\n";
        }
        else if(nospaces == judge)
        {
            cout << "Case " << i + 1 << ": " << "Output Format Error" << "\n";
        }
        else
        {
            cout << "Case " << i + 1 << ": " << "Wrong Answer" << "\n";
        }
        nospaces = "";
    }

	
    return 0;
}