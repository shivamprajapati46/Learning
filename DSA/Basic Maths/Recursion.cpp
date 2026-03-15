#include<iostream>
using namespace std;

int Print1toN(int i, int n){
   if(i > n) return 0;
   cout << i << endl;
   Print1toN(i+1, n);
}

int PrintNto1(int n){
   if(n==0) return 0;
   cout << n << endl;
   PrintNto1(n-1);
}



void printBacktraking(int i, int n){
    if(i < 1) return;
    printBacktraking(i-1, n);   // recursive call -->backtracking
    cout << i << " ";
}



int fib(int n){
    if(n<=1) return n;

    int last = fib(n-1);
    int SecondLast = fib(n-2);

    return last + SecondLast ;
}


int main(){
   // Print1toN(1,5);
   // PrintNto1(5);
   // printBacktraking(5,5);

      int n;
      cin>>n;
      for(int i=0; i<n; i++){
       cout<< fib(i) <<" ";
      }



   //  for(int i=0;i<=12;i++){
   //      cout << fib(i) << " ";
   //  }

   return 0;
}