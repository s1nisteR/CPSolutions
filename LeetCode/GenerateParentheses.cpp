#include <iostream>
#include <vector>
#include <string>

using namespace std;


class Solution
{
public:
    vector<string> generateParenthesis(int n)
    {
        generate("", n, 0, 0);
        return result;
    }
private:
    vector<string> result;
    void generate(string s, int n, int close, int open)
    {
        if(open == n && close == n)
        {
            result.push_back(s);
            return;
        }

        if(open < n)
        {
            generate(s + "(", n, close, open + 1);  //for recursion, try not to set local variables
        }

        if(close < open)
        {
            generate(s + ")", n, close + 1, open);
        }
    }
};


int main()
{
    Solution sln;
    vector<string> result = sln.generateParenthesis(4); 
    for(auto& x : result)
    {
        cout << x << "\n";
    }

    return 0;
}