#include<iostream>
using namespace std;
void allprime(int n, int no){
    int i=2;
    if(no==n){
    cout<<no<<endl;
    return;
    }
    int flag=1;
    while(i<no){
        if(no%i==0){
            flag=0;
        }
    i=i+1;
    }
    if(flag==1){
    cout<<no<<' ';
    }
    allprime(n,no+1);
}

int main()
{
    allprime(100,6);
return 0;
}