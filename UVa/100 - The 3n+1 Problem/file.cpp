#include <iostream>
#include <string>
#include <algorithm>
#include <array>
#include <vector>
#include <utility>
#include <cmath>
#include <bitset>

using namespace std;


int findCycle(int n)
{
	int counter = 0;
	while(n != 1)
	{
		if(n % 2 != 0) //n is odd
		{
			n = (3 * n) + 1;
		}
		else
		{
			n = n / 2;
		}
		counter++;
	}
	return counter + 1;
}


int main()
{
	//Fast IO
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

#ifndef ONLINE_JUDGE
	freopen("inputf.in","r",stdin);
	freopen("outputf.in","w",stdout);
#endif


	int a, b;
	int result = 0;
	while(cin >> a >> b)
	{
		if(a >= b)
		{
			for(int i = b; i <= a; ++i)
			{
				result = max(result, findCycle(i));
			}
		}
		else
		{
			for(int i = a; i <= b; ++i)
			{
				result = max(result, findCycle(i));
			}
		}
		

		cout << a << " " << b << " " << result << "\n";
		result = 0;
	}

	return 0;
}
