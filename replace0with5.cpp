#include<iostream> 
#include<cmath>
using namespace std;
int main()
{
    int n,a,c=0,i=0;
    cin>>n;
    int b=n;
    if(n==0){
        cout<<5<<endl;
        return 0;
    }
    while(n!=0){
        a=n%10;
        n=n/10;
        if(a==0){
            a=5;
            c=c+a*pow(10,i);
        }
        else{
            c=c+a*pow(10,i);
        }
        i++;
        }
    cout<<c<<endl;
    
return 0;
}