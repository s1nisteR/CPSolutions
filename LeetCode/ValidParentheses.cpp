#include <string>
#include <stack>
#include <iostream>

using namespace std;


class Solution {
public:
    bool isValid(string s) {
        stack<char> stck;
        for(auto& x : s)
        {
            if((x == ')' || x == '}' || x == ']') && stck.empty()) return false;    //handles an edge case that might prevent stck.top() from returning invalid values when stack is empty
            if(x == '(' || x == '{' || x == '[')
            {
                stck.push(x);
            }
            else if(x == ')')
            {
                if(stck.top() == '(')
                {
                    stck.pop();
                }
                else
                {
                    return false;
                }
            }
            else if(x == '}')
            {
                if(stck.top() == '{')
                {
                    stck.pop();
                }
                else
                {
                    return false;
                }
            }
            else if(x == ']')
            {
                if(stck.top() == '[')
                {
                    stck.pop();
                }
                else
                {
                    return false;
                }
            }
            
        }
        if(stck.empty()) return true;
        return false;
    }
};

int main()
{
    Solution sln;
    cout << sln.isValid("()") << "\n" << sln.isValid("()[]{}") << "\n" << sln.isValid("(]") << "\n";

    //try with edge case
    cout << sln.isValid(")}]") << "\n" << sln.isValid("(])") << "\n";   //should be false in both
    return 0;
}