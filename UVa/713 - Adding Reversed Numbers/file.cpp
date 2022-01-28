#include <bits/stdc++.h>

using namespace std;



void solve()
{
    string a, b;
    string result = "";
    int temp = 0;
    int carry = 0;
    cin >> a >> b;
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    
    //SO. Let's add two numbers, manually!
    if(a.size() > b.size())
    {
        int size = a.size() - b.size();
        for(int i = 0; i < size; ++i)
        {
            b.insert(b.begin(), '0');
        }
    }
    else
    {
        int size = b.size() - a.size();
        for(int i = 0; i < size; ++i)
        {
            a.insert(a.begin(), '0');
        }
    }
    for(int i = a.size() - 1; i >= 0; i--)
    {
        temp = (int)(a[i] - '0') + (int)(b[i] - '0') + carry;
        if(temp >= 10)
        {
            carry = 1;
        }
        else
        {
            carry = 0;
        }
        temp = temp % 10;
        result.insert(result.begin(), (char)(temp + '0'));
    }
    result.insert(result.begin(), (char)(carry + '0'));
    reverse(result.begin(), result.end());
    int index = 0;
    while(result[index] == '0')
    {
        result.erase(result.begin() + index);
    }
    index = result.size() - 1;
    while(result[index] == '0')
    {
        result.erase(result.begin() + index);
        index++;
    }
    cout << result << "\n";
}




int main()
{

#ifndef ONLINE_JUDGE
    freopen("inputf.in","r",stdin);
    freopen("outputf.in","w",stdout);
#endif

    //Fast IO
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    
    long long t;
    cin >> t;
    for(long long i = 0; i < t; ++i)
    {
        solve();
    }
    

    //solve();


    return 0;
}