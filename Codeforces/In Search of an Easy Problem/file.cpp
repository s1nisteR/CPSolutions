/********   All Required Header Files ********/
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


int main()
{
	//Fast IO
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

#ifndef ONLINE_JUDGE
	freopen("inputf.in", "r", stdin);
	freopen("outputf.in", "w", stdout);
#endif

	int n;
	int inp;
	bool easy = true; 
	cin >> n;
	int arr[101];
	for(int i = 0; i < n; ++i)
	{
		cin >> inp;
		arr[i] = inp;
	}

	int j = 0;
	while(true && j != sizeof(arr) / sizeof(int))
	{
		if(arr[j] == 1)
		{
			easy = false;
			break;
		}
		j++;
	}

	if(easy)
	{
		cout << "EASY" << "\n";
	}
	else
	{
		cout << "HARD" << "\n";
	}
	return 0;
}
