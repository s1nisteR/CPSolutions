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

	int counter = 1;
	int t;
	int l, w, h;
	cin >> t;

	for(int i = 0; i < t; ++i)
	{
		cin >> l >> w >> h;
		if(l <= 20 && w <= 20 && h <= 20)
		{
			cout << "Case " << counter << ": " << "good" << "\n";
		}
		else
		{
			cout << "Case " << counter << ": " << "bad" << "\n";
		}
		counter++;
	}

	return 0;
}
