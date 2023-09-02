#include<iostream> 
#include<climits>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of values you want to compare:"<<endl;
    cin>>n;
    int largest=INT_MIN;
    int num;
    for(int i=0;i<n;i++){
        cin>>num;
        if(largest<num){
            largest=num;
        }
    }
    cout<<"Largest num="<<largest;
return 0;
}