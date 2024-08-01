#include <iostream>
#include <vector>


using namespace std;


class Solution 
{
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) 
    {
        m = grid.size();
        n = grid[0].size();
        m_grid = grid;
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
                    area = 0;
                    fill(i, j);
                    maxArea = max(maxArea, area);
                }
            }
        }
        return maxArea;
    }

private:
    int m, n;
    int area = 0;
    int maxArea = 0;
    vector<int> dx = {1, -1, 0, 0 };
    vector<int> dy = {0, 0, 1, -1};
    vector<vector<int> > m_grid;
    vector<vector<bool> > visited;

private:
    bool isValid(int row, int col)
    {
        if(row < 0 || row > m - 1 || col < 0 || col > n - 1) return false;
        if(m_grid[row][col] == 0 || visited[row][col]) return false;
        return true;
    }

    void fill(int row, int col)
    {
        visited[row][col] = true;
        area++;
        for(int dir = 0; dir < 4; dir++)
        {
            if(isValid(row + dy[dir], col + dx[dir]))
            {
                fill(row + dy[dir], col + dx[dir]);
            }
        }
    }
};


int main()
{
    vector<vector<int> > grid = {{0,0,1,0,0,0,0,1,0,0,0,0,0},
                                 {0,0,0,0,0,0,0,1,1,1,0,0,0},
                                 {0,1,1,0,1,0,0,0,0,0,0,0,0},
                                 {0,1,0,0,1,1,0,0,1,0,1,0,0},
                                 {0,1,1,0,1,1,0,0,1,1,1,0,0},
                                 {0,0,1,0,0,0,0,0,0,0,1,0,0},
                                 {1,1,1,1,0,0,0,1,1,1,0,0,0},
                                 {1,1,1,1,0,0,0,1,1,0,0,0,0}};

    vector<vector<int> > grid2 = {{1}};

    Solution sln;

    cout << sln.maxAreaOfIsland(grid2) << "\n";
    return 0;
}