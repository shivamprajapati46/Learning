#include<iostream>
#include <algorithm>
#include <vector>
#include<cmath>
using namespace std;

// void printAllDivisior(int n){
//     for(int i = 1; i <= n; i++){
//         if(n % i == 0){
//             cout << i << " ";
//         }
//     }
// }


void printAllDivisior(int n){
    vector<int> vec;

    for(int i = 1; i <= sqrt(n); i++){
        if(n % i == 0){
            vec.push_back(i);

            if((n / i) != i){
                vec.push_back(n / i);
            }
        }
    }

    sort(vec.begin(), vec.end());

    for(auto it : vec){
        cout << it << " ";
    }
}

int main(){
    printAllDivisior(22);
}