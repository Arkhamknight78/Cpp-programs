#include<iostream> 
#include<climits>

using namespace std;
int main()
{
    int n1,n2,largest;
    cin>>n1>>n2;
    int y=max(n1,n2);
    largest=INT_MIN;
    for(int i=1;i<=y;i++){
        if(n1%i==0 && n2%i==0){
            if(i>=largest){
                largest=i;
            }
        }
    }
    cout<<largest<<endl;
return 0;
}