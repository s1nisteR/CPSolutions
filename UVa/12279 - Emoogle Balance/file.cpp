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

    int t = 0;
    int n;
    int inp;
    int give = 0;
    int alreadygiven = 0;
    while(cin >> n)
    {
        t++;
        if(n == 0)
        {
            break;
        }
        for(int i = 0; i < n; ++i)
        {
            cin >> inp;
            if(inp >= 1 && inp <= 99)
            {
                give++;
            }
            else if(inp == 0)
            {
                alreadygiven++;
            }
        }
        cout << "Case " << t << ": " << give - alreadygiven << "\n";
        give = 0;
        alreadygiven = 0;

    }



    return 0;
}