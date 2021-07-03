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

	int n;
	int inp;
	int prev;
	bool jolly = true;
	bool arr[3100];
	for(int j = 0; j < 3100; ++j)
	{
		arr[j] = false;
	}

	while(cin >> n)
	{
		cin >> prev;
		for(int i = 1; i < n; ++i)
		{
			cin >> inp;
			arr[abs(prev - inp)] = true;
			prev = inp;
		}

		for(int m = 1; m <= n - 1; ++m)
		{
			if(arr[m] == false)
			{
				jolly = false;
				break;
			}
		}
		if(jolly)
		{
			cout << "Jolly" << "\n";
 		}
 		else
 		{
 			cout << "Not jolly" << "\n";
 		}
 		for(int j = 0; j < 3100; ++j)
		{
			arr[j] = false;
		}
		jolly = true;

	}
			


	return 0;
}
