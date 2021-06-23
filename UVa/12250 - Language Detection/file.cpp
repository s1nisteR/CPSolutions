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
	string inp;
	while(cin >> inp)
	{
		if(inp == "#")
			break;
		else if(inp == "HELLO")
		{
			cout << "Case " << counter << ": " << "ENGLISH" << "\n";
		}
		else if(inp == "HOLA")
		{
			cout << "Case " << counter << ": " << "SPANISH" << "\n";
		}
		else if(inp == "HALLO")
		{
			cout << "Case " << counter << ": " << "GERMAN" << "\n";
		}
		else if(inp == "BONJOUR")
		{
			cout << "Case " << counter << ": " << "FRENCH" << "\n";
		}
		else if(inp == "CIAO")
		{
			cout << "Case " << counter << ": " << "ITALIAN" << "\n";
		}
		else if(inp == "ZDRAVSTVUJTE")
		{
			cout << "Case " << counter << ": " << "RUSSIAN" << "\n";
		}
		else
		{
			cout << "Case " << counter << ": " << "UNKNOWN" << "\n";
		}
		counter++;
	}

	return 0;
}
