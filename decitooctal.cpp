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
    a=n%8;
    n=n/8;
    sum=sum+a*pow(10,i);
    i++;
}
cout<<sum<<endl;
return 0;
}