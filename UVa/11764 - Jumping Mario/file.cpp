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
	//Fast IO
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

#ifndef ONLINE_JUDGE
	freopen("inputf.in","r",stdin);
	freopen("outputf.in","w",stdout);
#endif

	int t, n, inp;
	int prev;
	int high = 0;
	int low = 0;

	cin >> t;
	for(int i = 0; i < t; ++i)
	{
		cin >> n;

		cin >> inp;
		prev = inp;

		for(int j = 1; j < n; ++j)
		{
			cin >> inp;
			if(inp > prev)
			{
				high++;
			}
			else if(inp < prev)
			{
				low++;
			}
			prev = inp;
		}
		cout << "Case " << i + 1 << ": " << high << " " << low << "\n";
		high = 0;
		low = 0;
	}
	return 0;
}
