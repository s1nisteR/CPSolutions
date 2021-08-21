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


    int n;
    int a;

    cin >> n;
    int arr[n];

    for(int i = 0; i < n; ++i)
    {
        cin >> a;
        arr[i] = a;
    }

    int index = 0;
    for(int i = 0; i < n; ++i)
    {
        if(arr[i] == n)
        {
            index = i;
            break;
        }
    }

    int one = 0;
    for(int i = 0; i < n; ++i)
    {
        if(arr[i] == 1)
        {
            one = i;
            break;
        }
    }

    one++;
    index++;

    cout << max(max(one, index) - 1, n - min(one, index))<< "\n";

    return 0;
}