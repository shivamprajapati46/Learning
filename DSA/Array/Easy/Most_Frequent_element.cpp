#include<iostream>
using namespace std;

int main(){

   int n;
   cin>>n;
   int arr[n];
   for(int i=0; i<n; i++){
     cin>>arr[i];
   }

    int hash[100] = {0};

    for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }

    int maxi = 0;

    for(int i=0;i<100;i++){
        if(hash[i] > maxi){
            maxi = hash[i];
        }
    }

    cout<<"Most frequent frequency = "<<maxi;
    return 0;
}