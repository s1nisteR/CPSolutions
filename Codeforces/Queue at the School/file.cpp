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
     
     
     
    void solve()
    {
        int n, t;
        string inp;
        string result;
        cin >> n >> t;
        cin >> inp;
        result = inp;
        for(int i = 0; i < t; ++i)
        {
            inp = result;
            for(int j = 0; j < n - 1; ++j)
            {
                
                if(inp[j] == 'B' && inp[j + 1] == 'G')
                {
                    result[j] = 'G';
                    result[j + 1] = 'B';
                }
            }
        }
        cout << result << "\n";
     
     
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
    /*
        long long t;
        cin >> t;
        for(long long i = 0; i < t; ++i)
        {
            solve();
        }
    */
        solve();
     
     
        return 0;
    }