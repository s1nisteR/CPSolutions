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
    int arr[26];
    vector<int> answers;
    int highest = 0;
    int highestIndex = 0;
    string inp;
    cin >> t;
    cin.ignore();
    for(int i = 0; i < t; ++i)
    {
        for(int i = 0; i < 26; ++i)
        {
            arr[i] = 0;
        }
        getline(cin, inp);
        std::for_each(inp.begin(), inp.end(), [](char& c){
            c = tolower(c);
        });
        for(auto& x : inp)
        {
            if(x >= 'a' && x <= 'z')
            {
                arr[(int)x - 'a'] += 1;
            }
        }
        for(int i = 0; i < 26; ++i)
        {
            if(arr[i] > highest)
            {
                highest = arr[i];
                highestIndex = i;
            }
        }
        answers.push_back(highestIndex);
        for(int i = highestIndex + 1; i < 26; ++i)
        {
            if(arr[i] == highest)
            {
                answers.push_back(i);
            }
        }
        for(auto& x : answers)
        {
            cout << static_cast<char>(x + 'a');
        }
        cout << "\n";
        highestIndex = 0;
        highest = 0;
        answers = vector<int>();
    }


	
    return 0;
}