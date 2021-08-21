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
#include <string.h>
#include <stdlib.h>
#include <assert.h>


using namespace std;



int main(int argc, char** argv) 
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

    if(inp[0] == 'a' && inp[1] == '1' || inp[0] == 'h' && inp[1] == '1' || inp[0] == 'a' && inp[1] == '8' || inp[0] == 'h' && inp[1] == '8')
    {
        cout << 3 << "\n";
    }
    else if(inp[0] == 'a' || inp[0] == 'h' || inp[1] == '1' || inp[1] == '8')
    {
        cout << 5 << "\n";
    }
    else
    {
        cout << 8 << "\n";
    }



    return 0;
}