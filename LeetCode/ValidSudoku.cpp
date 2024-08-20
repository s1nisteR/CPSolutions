#include <vector>
#include <unordered_map>
#include <iostream>
#include <cmath>

using namespace std;


class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) 
    {
        unordered_map<char, int> m;
        //for checing the rows
        for(int i = 0; i < 9; i++)
        {
            for(int j = 0; j < 9; j++)
            {
                if(board[i][j] == '.') continue;
                if(m.count(board[i][j])) return false;
                m[board[i][j]]++;
            }
            m.clear();
        }
        m.clear();
        //for checking the columns
        for(int i = 0; i < 9; i++)
        {
            for(int j = 0; j < 9; j++)
            {
                if(board[j][i] == '.') continue;
                if(m.count(board[j][i])) return false;
                m[board[j][i]]++;
            }
            m.clear();
        }
        m.clear();
        //check the 3x3 subgrids
        for(int i = 0; i < 9; i++)
        {
            for(int j = floor(i / 3) * 3; j < (floor(i / 3) * 3) + 3; j++)
            {
                for(int k = (i % 3) * 3; k < ((i % 3) * 3) + 3; k++)
                {
                    if(board[j][k] == '.') continue;
                    if(m.count(board[j][k])) return false;
                    m[board[j][k]]++;
                }
            }
            m.clear();
        }
        return true;
    }
};

int main()
{
    vector<vector<char> > board = 
    {{'8','3','.','.','7','.','.','.','.'}
    ,{'6','.','.','1','9','5','.','.','.'}
    ,{'.','9','8','.','.','.','.','6','.'}
    ,{'8','.','.','.','6','.','.','.','3'}
    ,{'4','.','.','8','.','3','.','.','1'}
    ,{'7','.','.','.','2','.','.','.','6'}
    ,{'.','6','.','.','.','.','2','8','.'}
    ,{'.','.','.','4','1','9','.','.','5'}
    ,{'.','.','.','.','8','.','.','7','9'}};

    Solution sln;
    cout << sln.isValidSudoku(board) << "\n";

    return 0;
}