#include <iostream>
#include <string>
#include <algorithm>
#include <array>
#include <vector>
#include <utility>
#include <cmath>
#include <bitset>

using namespace std;


int main()
{


#ifndef ONLINE_JUDGE
	freopen("inputf.in","r",stdin);
	freopen("outputf.in","w",stdout);
#endif

	int t;
	int n;
	int inp;
	int highest = 0;
	cin >> t;
	for(int i = 0; i < t; ++i)
	{
		cin >> n;
		for(int j = 0; j < n; ++j)
		{
			cin >> inp;
			if(inp > highest)
			{
				highest = inp;
			}
		}
		cout << "Case " << i + 1 << ": " << highest << "\n";
		highest = 0;
	}


	return 0;
}
