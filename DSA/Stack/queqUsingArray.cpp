#include <iostream>
using namespace std;

const int CAPACITY = 10; 
int q[CAPACITY];    
int start = -1; 
int rear = -1; 
int currSize = 0;

void push(int x) {
    if (currSize == CAPACITY) {
        cout << "Queue is full Cannot push " << x << endl;
        return;
    }
    
    if (currSize == 0) {
        start = 0;
        rear = 0;
    } else {
        rear = (rear + 1) % CAPACITY;
    }
    
    q[rear] = x;
    currSize++;
    cout << "Pushed " << x << " into the queue.\n";
}

int pop() {
    if (currSize == 0) {
        cout << "Queue is empty Cannot pop." << endl;
        return -1; 
    }
    
    int poppedValue = q[start];
    
    if (currSize == 1) {
        start = -1;
        rear = -1;
    } else {
        start = (start + 1) % CAPACITY;
    }
    
    currSize--;
    return poppedValue;
}


int top() {
    if (currSize == 0) {
        cout << "Queue is empty ";
        return -1;
    }
    return q[start];
}

// Get current size
int size() {
    return currSize;
}

int main() {
    // Testing the Queue Implementation
    push(10);
    push(20);
    push(30);
    push(40);

    cout << "Front element: " << top() << endl;
    cout << "Queue size: " << size() << endl;

    cout << "Popped: " << pop() << endl;
    cout << "Popped: " << pop() << endl;

    cout << "Front element after pops: " << top() << endl;
    cout << "Queue size after pops: " << size() << endl;
    
    return 0;
}