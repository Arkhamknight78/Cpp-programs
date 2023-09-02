#include<iostream>
using namespace std;
int count(int n, int ld)
{ // ld is the digit under consideration in the last iteration so its deciding what the next digit under consideration should be to not have consecutive 1s.
    if(n==0){
        return 0;
    }
    if(n==1){
        if(ld==0){
            return 2; 
        }
        if(ld==1){
            return 1; 
            //at this point we have one dash left and the dash before that already has 1 then we only have one way to fulfil the cond. therefore return 1;//
        }
        }
        if(ld==0){
            return count(n-1,0)+count(n-1,1);
        }
        else{
            return count(n-1,0);
        }
    }

int main()
{
    int n;
    cin>>n;
    cout<<count(n,0);
return 0;
}