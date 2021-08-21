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
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    int t;
    long long a;
    long long b;
    long long answer;
    cin >> t;

    for(int i = 0; i < t; ++i)
    {
        cin >> a >> b;
        //solve
        if(a == b)
        {
            cout << 0 << " " << 0 << "\n";
        }
        else
        {
            answer = abs(a - b);
            cout << answer << " " << min(a % answer, answer - a % answer) << "\n";   
        }

    }

    return 0;
}