#include <iostream>
#include <vector>


using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) 
    {
        int top = 0;
        int bottom = matrix.size() - 1;
        int row = 0;
        int lastIndex = matrix[0].size() - 1;
        while(top <= bottom)
        {
            row = (top + bottom) / 2;
            if(matrix[row][lastIndex] < target)
            {
                top = row + 1;
            }
            else if(matrix[row][0] > target)
            {
                bottom = row - 1;
            }
            else
            {
                break;
            }
        }

        int l = 0;
        int r = lastIndex;
        int mid = 0;
        while(l <= r)
        {
            mid = (l + r) / 2;
            if(matrix[row][mid] < target)
            {
                l = mid + 1;
            }
            else if(matrix[row][mid] > target)
            {
                r = mid - 1;
            }
            else if(matrix[row][mid] == target)
            {
                return true;
            }
        }
        return false;
    }
};




int main()
{
    vector<vector<int> > t = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    Solution sln;
    cout << sln.searchMatrix(t, 17) << "\n";

}