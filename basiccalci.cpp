#include<iostream>
using namespace std;

int main() {

    char ch;
    cin>>ch;

    while(ch != 'x' or ch != 'X') {
        int n1, n2;


        if(ch == '*') {
            cin>>n1>>n2;
            cout<<n1*n2<<endl;
        }
        else if(ch == '/') {
            cin>>n1>>n2;
            cout<<n1/n2<<endl;
        }
        else if(ch == '+') {
            cin>>n1>>n2;
            cout<<n1+n2<<endl;
        }
        else if(ch == '-') {
            cin>>n1>>n2;
            cout<<n1-n2<<endl;
        }
        else if(ch == '%') {
            cin>>n1>>n2;
            cout<<n1%n2<<endl;
        }
        else if(ch == 'x' or ch == 'X') {
            return 0;
        }
        else {
            cout<<"Invalid operation. Try again."<<endl;
        }

        cin>>ch;
    }

    return 0;
}