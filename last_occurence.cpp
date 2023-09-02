#include <iostream>
using namespace std;
int last_occ(int *a, int n, int i, int key)
{
    if (i == n)
    {
        return -1;
    }
    if (a[i] == key)
    {
        int bi = last_occ(a, n, i + 1, key);
        if (bi != -1)
        {
            return bi;
        }
        else
            return i;
    }

    int j = last_occ(a, n, i + 1, key);
    return j;
}

int main()
{
    int a[] = {1, 2, 4, 5, 1, 6, 8, 1};
    cout << last_occ(a, 8, 0, 1) << endl;
    return 0;
}