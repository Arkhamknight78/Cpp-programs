#include <iostream>
#include <vector>
#include <set>
using namespace std;
bool itssafetoput(int b[100][100], int i, int j, int n)
{
    // for row and column
    for (int k = 0; k < n; k++)
    {
        if (b[i][k] == 1 || b[k][j] == 1)
        {
            return false;
        }
    }
    // diagonal only upper right and left because if we are at a certain row level then we have not placed Queen on the following rows
    int k = i, p = j;
    while (i >= 0 && j <=n)
    {
        if (b[i][j] == 1)
        {
            return false;
        }
        i--;
        j++;
    }
    while (k >= 0 && p >= 0)
    {
        if (b[k][p] == 1)
        {
            return false;
        }
        k--;
        p--;
    }

    return true;
}
bool Nqueen(int b[100][100], int i, int n)
{
    if (i == n)
    {
        // print
        for (int u = 0; u < n; u++)
        {
            for (int y = 0; y < n; y++)
            {
                // cout << b[u][y] << " ";
                (b[u][y]==1)?cout<<"Q"<<" ":cout<<"_"<<" ";
            }
            cout << endl;
        }
        cout<<endl;
        return false;
    }
    for (int j = 0; j < n ; j++)
    {
        if (itssafetoput(b, i, j, n))
        {
            b[i][j] = 1;
            bool a = Nqueen(b, i + 1, n);
            if (a)
            {
                return true;
            }
            else
            {
                b[i][j] = 0;
            }
        }
    }
    return false;
}
int main()
{
    int board[100][100]={0};
    int n;
    cin >> n;

    Nqueen(board, 0, n);
    return 0;
}