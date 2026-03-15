#include<iostream>
using namespace std;

void sumOfNumber(int i, int sum){
    if(i < 1) {
    cout<< sum;
    return;   
   }
    sumOfNumber(i-1, sum+i);
}


int sumOfNumber1(int n){
    if(n==0) return 0;   
   return n + sumOfNumber1(n-1);
}

int factorialOfNumber(int n){
    if(n==1) return 1;
    return  n *factorialOfNumber(n-1);
}

int main(){
    // int n;
    // int sum;
    // sumOfNumber(5,0);
    //    cout << (5);
       cout<< factorialOfNumber(5);
     return 0;
}