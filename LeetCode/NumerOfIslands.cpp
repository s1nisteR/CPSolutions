#include <iostream>
#include <vector>
#include <queue>
#include <tuple>


using namespace std;



class Solution {
public:
    int numIslands(vector<vector<char>>& grid) 
    {
        //grid BFS

        queue<char> q;
        //grid adjacent neighbours directions
        vector<pair<int, int> > dir = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
        bool visited[grid.size()][grid[0].size()];
    }
};


int main()
{
    vector<vector<char> > grid = {{'1','1','1','1','0'},{'1','1','0','1','0'},{'1','1','0','0','0'},{'0','0','0','0','0'}};
    Solution sln;
    cout << sln.numIslands(grid) << "\n";
}