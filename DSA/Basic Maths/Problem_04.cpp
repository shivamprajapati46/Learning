#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}


void primeNo(int n){
  int count = 0;
  if(n <=1) {
    cout << "number is not eligible"  << endl;
    return;
  }
  for(int i= 2; i<=n; i++){
    if(n%i == 0){
      count++;
    }
  }
    if(count == 2){
      cout << "Number is prime" << endl;
    }
    else {
      cout <<"Number is not prime" << endl;
    }
}

int main() {
     int n = 1;
   primeNo(n);
    if (isPrime(n))
        cout << "Prime number";
    else
        cout << "Not a prime number";
  return 0;
      
}
