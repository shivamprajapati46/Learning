#include<iostream>
using namespace std;

int fib(int n){
    if(n<=1) return n;

    int last = fib(n-1);
    int SecondLast = fib(n-2);

    return last + SecondLast ;
}

int main(){

   for(int i=0;i<=5;i++){
        cout << fib(i) << " ";
    }

    return 0;
}