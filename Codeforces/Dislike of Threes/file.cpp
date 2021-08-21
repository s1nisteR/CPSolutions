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

    int t;
    int k;
    cin >> t;

    vector<int> arr;
    for(int i = 1; i <= 9000; ++i)
    {
        if(i % 3 != 0 && i % 10 != 3)
        {
            arr.push_back(i);
        }
    }

    for(int i = 0; i < t; ++i)
    {
        cin >> k;
        cout << arr[k - 1] << "\n";
    }






    return 0;
}