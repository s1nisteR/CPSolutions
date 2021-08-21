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

    vector<pair<int, int> > arr;
    int inp;

    int n;
    cin >> n;
    for(int i = 0; i < n; ++i)
    {
        cin >> inp;
        arr.push_back(make_pair(inp, i));
    }

    sort(arr.begin(), arr.end());

    for(int i = 0; i < n / 2; ++i)
    {
        cout << arr.at(i).second + 1 << " " << arr.at(arr.size() - i - 1).second + 1 << "\n";
    }

    return 0;
}