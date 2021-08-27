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
    
    long long a, b, c;
    while(true)
    {
        cin >> a >> b >> c;
        if(a == 0 && b == 0 && c == 0)
        {
            break;
        }

        if((long long)a*a + (long long)b*b == (long long)c*c || (long long)a*a + (long long)c*c == (long long)b*b || (long long)b*b + (long long)c*c == (long long)a*a)
        {
            cout << "right" << "\n";
        }
        else
        {
            cout << "wrong" << "\n";
        }
    }


	
    return 0;
}