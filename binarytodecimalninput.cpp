#include<iostream> 
#include<cmath>
using namespace std;
int main()
{
    int count,n,a;
    cin>>count;
    for(int j=0;j<count;j++){
    cin>>n;
    int i=0;
    int sum=0;
    while(n>0){
        a=n%10;
        n=n/10;
        sum=sum+a*pow(2,i);
        i++;
    }
    cout<<sum<<endl;
    }
return 0;
}