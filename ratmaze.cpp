#include <iostream>
using namespace std;
int rat_in_maze(char maze[10][10], int soln[10][10], int i, int j, int m, int n)
{
    // base case
    if (i == m && j == n)
    {
        soln[m][n] = 1;
        for (int i = 0; i <= m; i++)
        {
            for (int j = 0; j <= n; j++)
            {
                cout << soln[i][j] << " ";
            }
            cout << endl;
        }
        return 1;
    }
        // recursion
        // assume soln exists through current cell
        soln[i][j] = 1;
        // right
        if (j <= n && maze[i][j + 1] != 'X')
        {
            int right_success = rat_in_maze(maze, soln, i, j + 1, m, n);
            if (right_success == 1)
            {
                return 1;
            }
        }
        // down
        if (i <= m && maze[i + 1][j] != 'X')
        {
            int down_suc = rat_in_maze(maze, soln, i + 1, j, m, n);
            if (down_suc == 1)
            {
                return 1;
            }
        }
        // backtracking
        soln[i][j] = 0;
        return 0;
    
}
    int main()
    {
        int m, n;
        cin >> m >> n;
        char maze[10][10];
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> maze[i][j];
            }
        }
        int soln[10][10] = {0};
        int ans = rat_in_maze(maze, soln, 0, 0, m , n);
        if (ans == 0)
        {
            cout << "-1" << endl;
        }
        return 0;
    }