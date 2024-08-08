#include <iostream>
#include <vector>
#include <string>

using namespace std;


class Solution 
{
public:

    string encode(vector<string>& strs) 
    {
        string result = "";
        for(auto& x : strs)
        {
            result.append(x + "\r");
        }
        return result;
    }

    vector<string> decode(string s) 
    {
        //neet#code#
        vector<string> result;
        int start = 0;
        for(size_t i = 0; i < s.size(); i++)
        {
            if(s[i] == '\r')
            {
                result.push_back(s.substr(start, (i - start)));
                start = i + 1;
            }
        }
        return result;
    }
};




int main()
{   
    Solution sln;


    vector<string> test = {  };
    vector<string> testResult = sln.decode(sln.encode(test));
    for(auto& x : testResult)
    {
        cout << x << " ";
    }
    cout << "\n";

    return 0;
}

