#include <iostream>
using namespace std;

int Transpose(int a[100][100], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            swap(a[i][j], a[j][i]);
        }
    }
    return 0;
}
int InvertArr(int a[100][100], int n)
{
    int col;

    for (col = 0; col < n; col++)
    {
        int i = 0, j = n - 1;
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
    cin >> n;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            a[i][j] = val;
            val++;
        }
    }
	Transpose(a,n);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << ' ';
        }
	}   
    return 0;
}