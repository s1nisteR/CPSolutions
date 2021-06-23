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
	cin >> t;
	long long a, b;
	while(t--)
	{
		cin >> a >> b;
		if(a > b)
		{
			cout << ">" << "\n";
		}
		else if(a < b)
		{
			cout << "<" << "\n";
		}
		else
		{
			cout << "=" << "\n";
		}
	}

	return 0;
}
