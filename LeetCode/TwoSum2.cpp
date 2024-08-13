#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) 
    {
        vector<int> result;
        int i = 0, j = numbers.size() - 1;
        while(true)
        {
            if(numbers[i] + numbers[j] == target) break;
            if(numbers[i] + numbers[j] < target)
            {
                i++;
            }
            else
            {
                j--;
            }
        }
        result.push_back(i + 1);
        result.push_back(j + 1);
        return result;  
    }
};

int main()
{
    vector<int> numbers = {2,2,3,3};
    Solution sln;

    vector<int> result = sln.twoSum(numbers, 5);

    cout << result[0] <<  " " << result[1];

    return 0;
}