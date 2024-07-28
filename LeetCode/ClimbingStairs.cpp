#include <iostream>
#include <vector>

using namespace std;

//Top-down DP approach with memoization
/*
class Solution 
{
public:
    int climbStairs(int n) 
    {
        vector<int> steps(n + 1, 0);
        //int steps[n + 1] = { 0 };   //leetcode yapping about unitialized arrays
        return _climb(steps, n);
    }
private:
    int _climb(vector<int>& steps, int n)
    {
        if(n <= 1) return 1;
        if(steps[n] != 0) return steps[n];
        int step = _climb(steps, n - 1) + _climb(steps, n - 2);
        steps[n] = step;
        return step;
    }
};
*/

//bottom-up DP approach (iterative)
class Solution 
{
public:
    int climbStairs(int n) 
    {
        if(n <= 1) return 1;
        int result = 0;
        int a = 1;
        int b = 1;
        for(int i = 2; i <= n; i++)
        {
            result = b + a;    //b is (n-1) a is (n-2)
            a = b;
            b = result;

        }
        return result;
    }
};


int main()
{
    Solution sln;

    cout << sln.climbStairs(45) << "\n";

    return 0;
}