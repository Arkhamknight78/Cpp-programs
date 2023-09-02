#include<iostream>
using namespace std;
void StaircaseSearch(int a[100][100],int n,int m,int key){
    int i=0,j=m-1;
    int found=0;
    while(i<n && j>=0){
        if(a[i][j]<key){
            i++;
        }
        else if(a[i][j]>key){
            j--;

        }
        if(a[i][j]==key){
            cout<<"Found element at "<<i<<" "<<j<<endl;
            found=1;
            break;
        }
    }
    if(found==0){
        cout<<"Key Not present"<<endl;
    }

}
int main()
{

    int n = 4, m = 4;
    int key;
    cin >> key;
    int a[100][100] =
        {{1, 4, 8, 10},
         {2, 5, 9, 15},
         {6, 13, 18, 20},
         {11, 14, 21, 25}};
    StaircaseSearch(a, n, m, key);

    return 0;
}
