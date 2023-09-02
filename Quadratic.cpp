#include<iostream> 
#include<cmath> 

using namespace std;
int main()
{
    int a,b,c;
    cout<<"ax^2+bx+c=0"<<endl;
    cout<<"Enter Values for a,b,c"<<endl;
    cin>>a>>b>>c;
    int d=pow(b,2)-4*a*c;
    int x1,x2;
    if(d==0){
        cout<<"Real and identical Roots"<<endl;
         x1=(-b+sqrt(d))/2*a;
         x2=(-b-sqrt(d))/2*a;
        cout<<"Roots are:"<<x1<<","<<x2<<endl;
    }
    else if(d>0){
        cout<<"Real and Distinct Roots"<<endl;
         x1=(-b+sqrt(d))/2*a;
         x2=(-b-sqrt(d))/2*a;
        cout<<"Roots are:"<<x1<<","<<x2<<endl;
    }
    else if(d<0){
        cout<<"Imaginary Roots"<<endl;
    }
    

    

return 0;
}