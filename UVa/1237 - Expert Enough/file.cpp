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
	int d;
	string inp;
	int low, high;
	int q;
	vector<int> answer;
	cin >> t;
	for(int i = 0; i < t; ++i)
	{
		cin >> d;
		string name[d];
		int low[d];
		int high[d];

		for(int j = 0; j < d; ++j)
		{
			cin >> inp;
			name[j] = inp;
			cin >> inp;
			low[j] = stoi(inp);
			cin >> inp;
			high[j] = stoi(inp);
		}

		cin >> q;

		for(int m = 0; m < q; ++m)
		{
			cin >> inp;

			for(int n = 0; n < d; ++n)
			{
				if(stoi(inp) >= low[n] && stoi(inp) <= high[n])
				{
					answer.push_back(n);
				}
			}
			if(answer.size() == 0 || answer.size() > 1)
			{
				cout << "UNDETERMINED" << "\n";
			}
			else if(answer.size() == 1)
			{
				cout << name[answer.at(0)] << "\n";
			}

			answer = (vector<int>){};

		}
		if(i != t - 1)
		{
			cout << "\n";	
		}
		

	}


	return 0;
}
