#include<iostream> 

using namespace std;
int main()
{
    char ch;
    cin>>ch;
    do{
        if(ch=='+'||ch=='*'||ch=='-'||ch=='/'||ch=='%')
        {
            int a,b;
            cin>>a;
            cin>>b;
        
        switch(ch){
            case '*':
            {cout<<a*b<<endl;
            break;}
            case '+':
            {cout<<a+b<<endl;
            break;}
            case '-':
            {cout<<a-b<<endl;
            break;}
            case '/':
            {cout<<a/b<<endl;
            break;}
            case '%':
            {cout<<a%b<<endl;
            break;}
            default:
            {cout<<"invalid statement. Try again"<<endl;
            break;}
        }

        }
        

    }
    while(ch!='X'||ch!='x');
return 0;
}