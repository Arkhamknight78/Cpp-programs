#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a[]={1,2,6,7,100};
    int len=sizeof(a)/sizeof(int);
    bool ans=binary_search(a,a+len,7);
    if(ans==false){
        cout<<"not found"<<endl;
    }
    else{
        cout<<"FOund at"<<endl;
    }


return 0;
}