#include <bits/stdc++.h> 
using namespace std; 

void insertAtBottom(stack <int> &s,int x){ //Dry Run important  
    if(s.empty()){
        s.push(x);
        return;
    }
    int y=s.top();
    s.pop(); 
    insertAtBottom(s,x);
    s.push(y);
}
void RecRev(stack<int>&s){
    if(s.empty()){
        return;
    }
    int x=s.top();
    s.pop();

    RecRev(s);
    insertAtBottom(s,x);

}
// Function to print Next Greater Element for each element of the array
void nextGreater(int arr[], int n) {
    stack<int> s;
    vector<int> result(n, -1);

    for (int i = 0; i < n; i++) {
        while (!s.empty() && arr[i] > arr[s.top()]) {
            result[s.top()] = arr[i];
            s.pop();
        }
        s.push(i);
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << "," << result[i] << endl;
    }
}


// The Main Function
int main() 
{ 
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        nextGreater(arr, n); 
    }
	
	return 0; 
} 