#include<iostream> 

using namespace std;
int main()
{
    int count=0;
    char ch;
    ch=cin.get();
    while(ch!='$'){
        count++; //it wont count '$'
        ch=cin.get();
    }
    cout<<endl;

cout<<"characters:"<<count<<endl;
cout<<ch;

return 0;
}