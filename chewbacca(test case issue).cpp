#include<iostream>
using namespace std;
int main() {
    long long int num, n;
    cin >> num;
    n = num;
    long long int ans = 0;
    long long int mult = 1;
    while(n != 0){

      long long int rem = n % 10;

      if(rem >= 5)
      {

        if(rem == 9 && (n/10) == 0){
        }
        else{
          rem = 9 - rem;
        }
      }
      ans += rem * mult;
      mult *= 10;
      n /= 10;
    }
    cout << ans;
    return 0;
}

