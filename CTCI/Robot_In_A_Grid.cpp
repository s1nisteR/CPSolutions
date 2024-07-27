//Problem 8.2

#include <iostream>

using namespace std;


//top-down DP approach with memoization, finds all possible paths with a grid fill algo
const int n = 4, c = 4;
int dx[] = {1, 0};
int dy[] = {0, 1};
char grid[n][c] = {
    {'.', '.', '#', '.'},
    {'.', '.', '.', '#'},
    {'.', '.', '#', '#'},
    {'.', '.', '.', 'G'}
};

bool visited[n][c] = { 0 };
bool unreachable = false;

bool isValid(int row, int col, int n, int c)
{
    //not valid if going out of grid
    if(row < 0 || row > n - 1 || col < 0 || col > c - 1)
    {
        return false;
    }
    if(grid[row][col] == '#' || visited[row][col])  //don't bother if blocked or already visited
    {
        return false;
    }
    return true;
}

void searchPath(int row, int col)
{
    if(grid[row][col] == 'G') return;
    visited[row][col] = true;
    grid[row][col] = 'V';
    for(int dir = 0; dir < 2; dir++)
    {
        if(isValid(row + dy[dir], col + dx[dir], n, c)) searchPath(row + dy[dir], col + dx[dir]);
    }
}


int main()
{

    searchPath(0, 0);

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < c; j++)
        {
            cout << grid[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}