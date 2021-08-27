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

bool check1(string s)
{
    for(auto& x : s)
    {
        if(x != toupper(x))
        {
            return false;
        }
    }
    return true;
}

bool check2(string s)
{
    if(s[0] != tolower(s[0]))
    {
        return false;
    }
    for(int i = 1; i < s.size(); ++i)
    {
        if(s[i] != toupper(s[i]))
        {
            return false;
        }
    }
    return true;

}



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

    string inp;
    cin >> inp;
    if(check1(inp) || check2(inp))
    {
        for(auto& x : inp)
        {
            if(x == toupper(x))
            {
                cout << (char)tolower(x);
            }
            else
            {
                cout << (char)toupper(x);
            }
        }
        cout << "\n";
    }
    else
    {
        cout << inp << "\n";
    }



    return 0;
}