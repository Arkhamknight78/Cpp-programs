#include<iostream>
#include<cstring>
using namespace std;
void Rotate_str2(char a[]){
    int n;
    cin>>n;
    cin.get();
    cin.getline(a,1000);
    int len=strlen(a);
    int i=len-1;
    while(i>=0){
        a[i+n]=a[i];
        i--;
    }
    i=0;
    int j=len;
    while(i<n){
        a[i]=a[j];
        i++;
        j++;
    }
    i=len;
    a[i]='\0';
    cout<<a<<endl;
}
//ALTERNATIVELY


// int Rotate_str(char a[1000]){
//     int n;
//     cin>>n;
//     cin.get();
//     cin.getline(a,1000);
//     cout<<strlen(a)<<endl;
//     for(int i=0;i<n;i++){
//         char pickup=a[strlen(a)-1];
//         int j;
//         for(j=strlen(a)-1;j>0;j--){
//             a[j]=a[j-1];
//         }
//         a[j]=pickup;
//     }
//     cout<<a<<endl;
// return 0;
// }


int main()
{
    char a[1000];
    // Rotate_str(a);
    Rotate_str2(a);
    
return 0;
}


