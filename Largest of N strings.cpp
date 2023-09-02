#include<iostream>
#include<cstring>
using namespace std;
void copy(char large[],char a[]){
    int n=strlen(a);
    for(int i=0;i<n;i++){
        large[i]=a[i];

    }
}
int largest_str(char a[1000]){
    int n,largest=0;
    char largest_arr[1000];
    cin>>n;
    cin.get(); //ignoring white space character after the input of number
    for(int i=0;i<n;i++){
        cin.getline(a,1000);
        int len=strlen(a);
        if(largest<len){
            largest=len;
            copy(largest_arr,a);
        }
    }
    cout<<largest_arr<<endl;
return 0;
}
int main()
{
    char a[1000];
    largest_str(a);
return 0;
}