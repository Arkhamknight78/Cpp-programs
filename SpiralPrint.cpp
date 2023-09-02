#include <iostream>
using namespace std;
void SpiralPrint(int a[100][100], int m, int n)
{
    int sr = 0, sc = 0, er = m - 1, ec = n - 1;
    while (sc <ec and sr < er)
    {
        for (int col = sc; col <=ec; col++)
        {
            cout << a[sr][col] << ", ";
        }
        sr++;
        for (int row = sr; row <=er; row++)
        {
            cout << a[row][ec] << ", ";
        }
        ec--;
        if (sr <=er)
        {
            for (int col = ec; col >= sc; col--)
            {
                cout << a[er][col] << ", ";
            }
            er--;
        }
        if (sc<=ec)
        {
            for (int row = er; row >= sr; row--)
            {
                cout << a[row][sc] << ", ";
            }
            sc++;
        }
    }
    cout<<"END";
}
int main()
{
    int val = 1;
    int a[100][100]={{1,2,3},{4,5,6},{7,8,9}};
    int m, n;
    cin >> m >> n;
    // for (int i = 0; i < m; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         a[i][j] = val;
    //         val++;
    //     }
    // }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    SpiralPrint(a, m, n);

    return 0;
}