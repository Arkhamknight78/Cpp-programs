#include <iostream>
#include <cmath>
using namespace std;

bool canPlace(int m[100][100], int i, int j, int n, int num)
{
    for (int x = 0; x < n; x++)
    {
        if (m[i][x] == num || m[x][j] == num)
        {
            return false;
        }
    }
    int rn = sqrt(n);
    int sx = (i / rn) * rn;
    int sy = (j / rn) * rn;
    for (int t = sx; t < (sx + rn); t++)
    {
        for (int u = sy; u < (sy + rn); u++)
        {
            if (m[t][u] == num)
            {
                return false;
            }
        }
    }

    return true;
}

bool sudokuSolver(int m[100][100], int i, int j, int n)
{
    // base case
    if (i == n)
    {
        for (int p = 0; p < n; p++)
        {
            for (int q = 0; q < n; q++)
            {
                cout << m[p][q] << " ";
            }
            cout << endl;
        }
        return true;
    }
    if (j == n)
    {
        return sudokuSolver(m, i + 1, 0, n);
    }
    if (m[i][j] != 0)
    {
        return sudokuSolver(m, i, j + 1, n);
    }

    // rec case

    for (int num = 1; num <=n; num++)
    {
        if (canPlace(m, i, j, n, num))
        {
            m[i][j] = num;

            bool isstillsolved = sudokuSolver(m, i, j+1, n);
            if (isstillsolved)
            {
                return true;
              
            }
              
        }
        m[i][j] = 0;
    }

return false;
}
int main()
{
    int mat[100][100] = {
        {0, 0, 7, 4, 9, 1, 6, 0, 5},
        {2, 0, 0, 0, 6, 0, 3, 0, 9},
        {0, 0, 0, 0, 0, 7, 0, 1, 0},
        {0, 5, 8, 6, 0, 0, 0, 0, 4},
        {0, 0, 3, 0, 0, 0, 0, 9, 0},
        {0, 0, 6, 2, 0, 0, 1, 8, 7},
        {9, 0, 4, 0, 7, 0, 0, 0, 2},
        {6, 7, 0, 8, 3, 0, 0, 0, 0},
        {8, 1, 0, 0, 4, 5, 0, 0, 0}};
    // int n;
    // cin >> n;
    sudokuSolver(mat, 0, 0, 9);

    return 0;
}