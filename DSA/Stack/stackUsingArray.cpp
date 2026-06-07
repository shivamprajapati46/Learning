#include <iostream>
using namespace std;

// Define a fixed maximum capacity for the stack
const int MAX_SIZE = 4; 
int arr[MAX_SIZE];
int topIndex = -1; 

void push(int x) {
    if (topIndex >= MAX_SIZE - 1) {
        cout << "Stack Overflow! Cannot push " << x << endl;
        return;
    }
    topIndex = topIndex + 1;
    arr[topIndex] = x;
    cout << "Pushed " << x << " onto the stack.\n";
}

void pop() {
    if (topIndex == -1) {
        cout << "Stack Underflow! Nothing to pop.\n";
        return;
    }
    cout << "Popped " << arr[topIndex] << " from the stack.\n";
    topIndex = topIndex - 1;
}

int top() {
    if (topIndex == -1) {
        cout << "Stack is empty! ";
        return -1; 
    }
    return arr[topIndex];
}

int size() {
    return topIndex + 1;
}

int main() {
    // Testing the Stack Implementation
    push(10);
    push(20);
    push(30);
    push(40);
    
    // Stack Overflow because MAX_SIZE is 4
    push(50); 

    cout << "Current top element: " << top() << endl;
    cout << "Current stack size: " << size() << endl;

    pop();
    cout << "Top element after pop: " << top() << endl;
    cout << "Stack size after pop: " << size() << endl;

    return 0;
}