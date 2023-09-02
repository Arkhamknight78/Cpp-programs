#include<iostream> 
#include<cmath>
using namespace std;
int trailing(int &a)
{
    int i=1,sum=0;
    for(i=5;a/i>=1;i*=5){
        sum+=(a/i);
    }
    
return sum;
}

int main()
{
    int n;
    cin>>n;
cout<<trailing(n)<<endl;
return 0;
}