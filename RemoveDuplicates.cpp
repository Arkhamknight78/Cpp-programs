#include<iostream>
using namespace std;
int main()
{
    char a[1000];
    cin.getline(a,1000);
    int i=0;
    int j=i+1;
    while(a[j]!='\0'){
        if(a[i]!=a[j]){
            i++;   //for replacing the duplicates next to the first character
            a[i]=a[j];
        }
        else{
            j++;
        }
    }
    a[i+1]='\0';
    cout<<a<<endl;
return 0;
}