#include <iostream>
using namespace std;
int sol[100][100];
bool mazesolver(char maze[100][100], int m, int n, int i, int j)
{
    sol[i][j] = 1;
    // base case
    if (i == m - 1 && j == n - 1)
    {
        sol[i][j] = 1;
        for (int k = 0; k < m; k++)
        {
            for (int l = 0; l < n; l++)
            {
                cout << sol[k][l] << ' ';
            }
            cout << endl;
        }
        cout << endl;
        return false;
    }
    
  
    if (maze[i][j + 1] != 'X' and j + 1 < n)
    {
        bool issolright = mazesolver(maze, m, n, i, j + 1);
        if (issolright== true)
        {
            return true;
        }
    }
      if (maze[i + 1][j] != 'X' and i + 1 < m)
    {
        bool issoldown = mazesolver(maze, m, n, i + 1, j);
        if (issoldown == true)
        {
            return true;
        }
    }

    sol[i][j] = 0;
    return false;
}
int main()
{
    char maze[100][100] = {
        "0000",
        "0X0X",
        "000X",
        "XX00"};
    cout << mazesolver(maze, 4, 4, 0, 0);
    return 0;
}