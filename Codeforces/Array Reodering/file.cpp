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
    int n;
    long long a;
    int counter = 0;
    vector<long long> arr;
    cin >> t;

    for(int i = 0; i < t; ++i)
    {
        cin >> n;
        for(int j = 0; j < n; ++j)
        {
            cin >> a;
            arr.push_back(a);
        }
        vector<long long> answer;
        vector<long long> even;
        vector<long long> odd;
        for(auto& x : arr)
        {
            if(x % 2 == 0) //if even
            {
                even.push_back(x);
            }
            else    //if odd
            {
                odd.push_back(x);
            }
        }
        for(auto& x : even)
        {
            answer.push_back(x);
        }
        for(auto& x : odd)
        {
            answer.push_back(x);
        }
        for(int p = 0; p < n; p++)
        {
            for(int q = p + 1; q < n; q++)
            {
                if(gcd(answer.at(p), 2 * answer.at(q)) > 1)
                {
                    counter++;
                }
            }
        }
        answer.clear();
        even.clear();
        odd.clear();
        arr.clear();
        cout << counter << "\n";
        counter = 0;

    }


    return 0;
}