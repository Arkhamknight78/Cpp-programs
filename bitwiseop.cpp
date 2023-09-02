#include <iostream>
using namespace std;
 bool isOdd (int n) {
     int lsb = (n & 1) == 0 ? 0 : 1;

     return lsb;
 }
 bool checkith (int n,int i){
     int mask = (1<<i);
    if((n&mask) > 0){
         return true;
    }
    else{
         return false;}
 }
 int main()
 {
     int n;
     cin >> n;
     if (isOdd(n)){
        cout<<n<<"is odd"<<endl;
     }
     else{
        cout<<n<<"is even"<<endl;
     }
     int i;
     cin>>i;
     if(checkith(n,i)){
        cout<<i<<"th bit is 1";
     }
     else{
        cout<<i<<"th bit is 0";
     }
     return 0;
     
    }
