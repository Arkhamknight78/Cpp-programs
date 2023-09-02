#include<iostream> 
using namespace std;

int main()
{
    int n1,n3,n2,d=0,i=1,count=0;
    cin>>n1>>n2;
    while(count<n1)
    {
        int x=(3*i)+2;
        if(x%n2!=0){
        cout<<x<<endl;
        count++;
        }
    i++;  
    // else {d++;}
    }
       
    
return 0;
}