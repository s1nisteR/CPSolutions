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
    int n;
    
    int arr[10];
    cin >> t;
    for(int i = 0; i < t; ++i)
    {
        stringstream r;
        for(int i = 0; i < 10; ++i)
        {
            arr[i] = 0;
        }
        cin >> n;
        for(int i = 1; i <= n; ++i)
        {
           r << i; 
        }
        for(auto& x : r.str())
        {
            arr[(char)x - '0'] += 1;
        }
        cout << arr[0] << " ";
        cout << arr[1] << " ";
        cout << arr[2] << " ";
        cout << arr[3] << " ";
        cout << arr[4] << " ";
        cout << arr[5] << " ";
        cout << arr[6] << " ";
        cout << arr[7] << " ";
        cout << arr[8] << " ";
        cout << arr[9] << "\n";
    }
	
    return 0;
}