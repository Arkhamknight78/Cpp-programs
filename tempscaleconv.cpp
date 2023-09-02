#include<iostream> 
#include<cmath>
using namespace std;
int main()
{
    int fmin,fmax,step;
    cin>>fmin;
    cin>>fmax;
    cin>>step;
    while(fmin<=fmax){
        int x=(5*(fmin-32))/9;
        cout<<fmin<<'\t';
        cout<<x<<endl;
        fmin=fmin+step;
    }


return 0;
}