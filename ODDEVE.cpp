#include<iostream> 
using namespace std;

int sum_digit(int n){
    int sum1=0;
    int sum2=0;
    int i=0;
    int count=0;
    int b=n;
    int c=n;
    while(n>0){
        int a;
        a=n%((10));
        n=n/(10);
        if(a%2==0){
            sum1=sum1+a;
        }
        else{
            sum2=sum2+a;
        }
        i++;
        
    }
    if(sum1%4==0 || sum2%3==0){
        cout<<"yes"<<endl;
        return 1;
    }
    else{
        cout<<"No"<<endl;
        return 0;
    }
}  

int main()
{
    int n,t,y;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>y;
        sum_digit(y);
    }

return 0;
}