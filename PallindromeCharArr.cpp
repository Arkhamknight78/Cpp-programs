#include<iostream>
#include<cstring>
using namespace std;
bool Ispallindrome(char a[100]){
    int i=0;
    int j=strlen(a)-1;
    while(i<j){
        if(a[i]!=a[j]){
            return false;
        }
        else{
            i++;
            j--;
        }
    }
    return true;
}
int main()
{
    char a[100];
    cin.getline(a,100,'\n');
   char chari=Ispallindrome(a);
   if(chari==true){
    cout<<"Pallindrome"<<endl;
   }
   else{
    cout<<"Not Pallindrome"<<endl;
   }
return 0;
}