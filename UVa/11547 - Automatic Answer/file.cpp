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

	int t;
	int n;
	int digit;
	cin >> t;
	for(int i = 0; i < t; ++i)
	{
		cin >> n;
		digit = ((((((((n * 567) / 9) + 7492) * 235) / 47) - 498) % 100) / 10);
		if(digit >= 0) //positive
		{
			cout << digit << "\n";
		}
		else //negative
		{
			cout << digit * -1 << "\n";
		}
	}


	//5692

	return 0;
}
