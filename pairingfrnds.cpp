#include<iostream>
using namespace std;
int frnds(int n){
    if(n==0){
        return 1;
    }
    if(n==1){
        return 1;
    }

    return frnds(n-1)+((n-1)*frnds(n-2));
}
int main()
{
    int n;
    cin>>n;
    cout<<frnds(n);
return 0;
}