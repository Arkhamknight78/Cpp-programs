#include<iostream> 
#include<cmath>
using namespace std;
int main()
{
int n,a;
int sum=0;
int i=0;
cin>>n;
while(n>0){
    a=n%10;
    n=n/10;
    sum=sum+a*pow(2,i);
    i++;
}
cout<<sum<<endl;
return 0;
}