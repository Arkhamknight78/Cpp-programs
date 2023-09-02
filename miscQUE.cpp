#include <iostream>
#include<cstring>
using namespace std;

int main() 
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
    {
	    int t;
	    cin>>t;
	    char a[t];
	    cin.getline(a,t);
	    int p=0;
	    int j=p+1;
	    while(a[j]='\0')
        {
	        if(a[p]!=a[j])
            {
	            i++;
	            a[p]=a[j];
	        }
	        else
            {
	            j++;
	        }
	    }
	    
	
	for(int j=0; a[j]!='\0';j++){
	    cout<<a[j]<<endl;
    }
    }

	
	
	return 0;
}
