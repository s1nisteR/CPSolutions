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

	vector<long long> arr;
	long long inp;
	while(cin >> inp)
	{
		arr.push_back(inp);
			if(arr.size() % 2 == 0) //even number of numbers
	{
		sort(arr.begin(), arr.end());
		cout << (long long)(arr[arr.size() / 2 - 1] + arr[arr.size() / 2 ]) / 2 << "\n";
	}
	else	//odd number of numbers
	{
		sort(arr.begin(), arr.end());
		cout << arr[arr.size() / 2] << "\n";
	}
	} 


	return 0;
}
