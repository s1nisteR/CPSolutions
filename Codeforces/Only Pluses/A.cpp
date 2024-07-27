#include <bits/stdc++.h>

using namespace std;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int T, a, b, c, result;
    cin >> T;

    for(int t = 0; t < T; ++t)
    {
        vector<int> arr;
        result = 0;
        cin >> a >> b >> c;
        arr.push_back(a); arr.push_back(b); arr.push_back(c);
        for(int i = 0; i < 5; i++)
        {
            sort(arr.begin(), arr.end());
            arr[0]++;
            result = arr[0] * arr[1] * arr[2];
        }
        cout << result << "\n";
    }
}