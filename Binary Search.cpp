#include <iostream>
using namespace std;
void fillArr(int a[100][100], int n, int m)
{
    int val = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            a[i][j] = val;
        val++;
    }
    cout << endl;
}
int Binary(int a[100][100], int n, int m, int key)
{
    int t = 1;
    for (int row = 0; row < n; row++)
    {

        int s = 0;  
        
        /*first a row is traversed then row is changed through outermost for loop*/

        int e = m - 1;
      
        while (s <= e)
        {
            int mid = (s + (e)) / 2;
            if (a[row][s] == key)
                {
                    cout << "Row & col " << row << " " << s << endl;
                    return 0;
                }            
            else if (a[row][mid] > key)
            {
                e = mid-1;
            }
            else
            {
                s = mid + 1;
             
            }
        }

    }
    if (t == 1)
    {
        cout << "not found" << endl;
    }
    return 0;
}

int main()
{
    int n = 4, m = 4;
    int key;
    cin >> key;
    int a[100][100] =
        {{1, 4, 8, 10},
         {2, 5, 9, 15},
         {6, 13, 18, 20},
         {11, 14, 21, 25}};
    Binary(a, n, m, key);

    return 0;
}