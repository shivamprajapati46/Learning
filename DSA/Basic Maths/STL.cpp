#include<iostream>
#include<queue>
#include<map>
#include<unordered_map>
using namespace std;

int main(){

    // priority_queue<int> pq;
    // pq.push(10);
    // pq.push(20);
    // pq.push(5);

    // cout << pq.top() << endl;

    map<string,int> mp;
                       

    mp["coldring"] = 30;
    mp["cabel"] = 10;
    mp["robot"] = 20;

    for(auto it : mp){
        cout << it.first << " " << it.second << endl;
    }

    unordered_map<int,int> mpp;

    mpp[3] = 300;
    mpp[1] = 100;
    mpp[2] = 200;

    for(auto it : mpp){
        cout << it.first << " " << it.second << endl;
    }

}