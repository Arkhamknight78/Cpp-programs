#include <iostream>
using namespace std;

int Transpose(int a[100][100], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < m; j++)
        {
            swap(a[i][j], a[j][i]);
        }
    }
    return 0;
}
int InvertArr(int a[100][100], int n, int m)
{
    int col;

    for (col = 0; col < m; col++)
    {
        int i = 0, j = m - 1;
        while (i < j)
        {
            swap(a[i][col], a[j][col]);
            i++;
            j--;
        }
        // for (i = 0; i < n; i++)
        // {
        //     for (j = m - 1; j >= 0; j--)
        //     {

        //         swap(a[j][col], a[i][col]);
        //     }
        // }
    }

    return 0;
}
int main()
{
    int val = 1;
    int a[100][100];
    int m, n;
    cin >> m >> n;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            a[i][j] = val;
            val++;
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }
    cout << endl;
    cout << endl;
    int p;
    cout << "Enter Number of rotations needed" << endl;
    cin >> p;
    for (int l = 1; l <=p ; l++)
    {
        Transpose(a, n, m);
        cout << endl;
        cout << endl;

        InvertArr(a, n, m);
        cout << l << "rotation" << endl;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << a[i][j] << ' ';
            }
            cout << endl;
        }
    cout<<endl;
    }
    return 0;
}