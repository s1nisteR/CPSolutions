#include <vector>
#include <iostream>


using namespace std;


class Solution 
{
public:
    int numIslands(vector<vector<char>>& grid) 
    {
        m_grid = grid;
        m = grid.size();
        n = grid[0].size();
        visited = vector<vector<bool> >(m);
        for(auto& x : visited)
        {
            x = vector<bool>(n, false);
        }
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(isValid(i, j))
                {
                    count++;
                    _numOfIslands(i, j);
                }
            }
        }
        return count;
    }

private:
    //Directions:     R   L  D  U
    vector<int> dx = {1, -1, 0, 0};
    vector<int> dy = {0, 0, 1, -1};
    vector<vector<bool> > visited;
    vector<vector<char> > m_grid;
    int m;
    int n;
    int count = 0;

private:
    bool isValid(int row, int col)
    {
        if(row < 0 || row > m - 1 || col < 0 || col > n -1 ) return false;
        if(m_grid[row][col] == '0') return false;
        if(visited[row][col]) return false;

        return true;
    }

    void _numOfIslands(int row, int col)
    {
        //cout << "Visited: " << row << " " << col << "\n";
        visited[row][col] = true;
        for(int dir = 0; dir < 4; dir++)
        {
            if(isValid(row + dy[dir], col + dx[dir]))
            {
                _numOfIslands(row + dy[dir], col + dx[dir]);
            }
        }
    }
};



int main()
{
    Solution sln;
    vector<vector<char> > grid1 = {
        {'1','1','1','1','0'},
        {'1','1','0','1','0'},
        {'1','1','0','0','0'},
        {'0','0','0','0','0'}
    };

    vector<vector<char> > grid2 = {
        {'1','1','0','0','0'},
        {'1','1','0','0','0'},
        {'0','0','1','0','0'},
        {'0','0','0','1','1'}
    };

    cout << sln.numIslands(grid2) << '\n';
    return 0;
}