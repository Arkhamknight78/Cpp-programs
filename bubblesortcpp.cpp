#include <iostream>
using namespace std;
int bubble(int A[], int n)
{
    int t;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i-1 ; j++)
        {
            if (A[j] > A[j +1])
            {
                t=A[j];
                A[j]=A[j+1];
                A[j+1]=t;

            }

        }
    }

    return 0;
}

int main()
{
    int A[6] = {5, 7, 2, 6, 4, 9};
    int len = sizeof(A) / sizeof(int);
    cout << "unsorted array" << endl;
    cout << endl;
    cout << endl;
    bubble(A, len);
    for (int i = 0; i<len; i++)
    {
        cout << A[i] <<endl;
    }
    return 0;
}