#include<iostream>
#include<deque>
using namespace std;
int main()
{
    int n;
    int a[100000];
    int k;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>k;
    deque<int> Q(k); // constructor to build a deque of size k
    int i;
    for(i=0;i<k;i++){
        while(!Q.empty() && a[i]>a[Q.back()]){
            Q.pop_back();
        }
        Q.push_back(i);
    }
    // for k to n elements
    for(;i<n;i++){
        std::cout<<a[Q.front()]<<" ";

        //1. remove elements not part of the current window (contraction)
        while(!Q.empty() && Q.front()<=i-k){
            Q.pop_front();
        }
        //2. remove elements which are not useful and are in window
        while(!Q.empty() && a[i]>=a[Q.back()]){
            Q.pop_back();
        }
        Q.push_back(i); // add new elements(expansion)
    }
    std::cout<<a[Q.front()]<<endl;

return 0;
}
