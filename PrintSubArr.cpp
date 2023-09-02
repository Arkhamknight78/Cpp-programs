#include <iostream>
#include <climits>
using namespace std;
int SumSubArr(int a[], int len)
{
    int sMax = INT_MIN;
    int wi, wj;
    for (int i = 0; i < len; i++)
    {
        for (int j = i; j <=len; j++)
        {
            int sum = 0;
            for (int k = i; k <= j; k++)
            {
                sum +=a[k];
            }
            cout << endl;
            if (sMax < sum)
            {
                sMax = sum;
                wi = i;
                wj = j;
            }
        }
    }

    for (int i = wi; i < wj; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
int main()
{
    int a[] = {1, -2, 3, 4, -5, 6};
    int len = sizeof(a) / sizeof(int);
    SumSubArr(a, len);

    return 0;
}