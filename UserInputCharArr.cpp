#include <iostream>
using namespace std;
int main()
{
    char a[100];
    //    a[1]='l';
    //    a[0]='j';
    int i = 0;
    char ch = cin.get();
    while (ch != '\n')
    {
        a[i] = ch;
        i++;
        ch = cin.get();
    }
    a[i] = '\0';
    cout << a << endl;
    return 0;
}
