#include<iostream> 

using namespace std;
int main()
{
    int b=1356;
    int a;
    int sum=0;
    while(b>0){
        a=b%10;
        sum=sum+a;
        b=b/10;
    }
    cout<<sum<<endl;

return 0;
}