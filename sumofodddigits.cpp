#include<iostream> 

using namespace std;
int main()
{
    int n,a,rev,p;
    cin>>n;
    int sum1=0;
    int sum2=0;
    int i=0;
    int count=0;
    int b=n;
    int c=n;
    while(c>0){
        p=c%10;
        count++;
        c=c/10;

    }
    // while(b>0){
    //     rev=(rev)*10+b%10;
    //     b=b/10;}       
    while(n>0){
        
        a=n%((10));
        n=n/(10);
        if(i%2==0){
            sum1=sum1+a;
        }
        else{
            sum2=sum2+a;
        }
        i++;
        
    }
    cout<<count<<endl;
    if(count%2==0){
    cout<<"sum of digit at even places:"<<sum1<<endl;
    cout<<"sum of digit at odd places:"<<sum2<<endl;}
    else{
        cout<<"even"<<sum2<<endl;
        cout<<"odd"<<sum1<<endl;
    }
return 0;
}