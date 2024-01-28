#include <vector>
#include <stack>
#include <string>
#include <iostream>

using namespace std;

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> result;
        int t1;
        int t2;
        for(auto& x : tokens)
        {
            if(x == "+")
            {
                t2 = result.top();
                result.pop();
                t1 = result.top();
                result.pop();
                result.push(t1 + t2);
            }
            else if(x == "-")
            {
                t2 = result.top();
                result.pop();
                t1 = result.top();
                result.pop();
                result.push(t1 - t2);
            }
            else if(x == "*")
            {
                t2 = result.top();
                result.pop();
                t1 = result.top();
                result.pop();
                result.push(t1 * t2);
            }
            else if(x == "/")
            {
                t2 = result.top();
                result.pop();
                t1 = result.top();
                result.pop();
                result.push(t1 / t2);
            }
            else
            {
                result.push(stoi(x));
            }
        }
        return result.top();
    }
};

int main()
{
    Solution sln;
    vector<string> tok = {"2","1","+","3","*"};
    vector<string> tok2 = {"4","13","5","/","+"};
    vector<string> tok3 = {"10","6","9","3","+","-11","*","/","*","17","+","5","+"};
    cout << sln.evalRPN(tok) << "\n";
    cout << sln.evalRPN(tok2) << "\n";
    cout << sln.evalRPN(tok3) << "\n";
    return 0;
}