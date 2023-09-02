#include <iostream>

using namespace std;
int main()
{
    int y;
    int fact = 0;
    int n;
    cout << "Enter your number:" << endl;
    cin >> n;
    int i,j;
    for ( i = 2; i <= n; i++)
    {
        for ( j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                break;
            }
        }
            if(j==i){
                cout<<i<<' ';

            }
        
            
        
       
    }



return 0;
}