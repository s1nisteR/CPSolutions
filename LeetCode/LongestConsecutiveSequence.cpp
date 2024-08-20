#include <vector>
#include <iostream>
#include <unordered_map>
#include <algorithm>

using namespace std;


class Solution {
public:
    int longestConsecutive(vector<int>& nums) 
    {
        int answer = 0, length = 0;
        unordered_map<int, int> m;
        for(auto& x : nums)
        {
            m[x]++;
        }

        for(auto& x : nums)
        {
            //is this element the start of a sequence?
            if(m.count(x - 1) == 0)
            {
                length = 0;
                //yes it is so now check until the end of this sequence
                while(m.count(x + length))
                {
                    length++;
                }
                answer = max(answer, length);
            }

        }

        return answer;
    }
};

int main()
{
    vector<int> nums = {};
    Solution sln;

    cout << sln.longestConsecutive(nums) << "\n";

    return 0;
}