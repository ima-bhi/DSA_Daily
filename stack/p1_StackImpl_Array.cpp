#include <iostream>
#define MAX 1000

class Stack {
    int top;
public:
    int a[MAX]; // Maximum size of Stack

    Stack() { top = -1; }
    void push(int x);
    int pop();
    int peek();
    bool isEmpty();
};

void Stack::push(int x) {
    if (top >= (MAX - 1)) {
        std::cout << "Stack Overflow";
    }
    else {
        a[++top] = x;
        std::cout << x << " pushed into stack\n";
    }
}

int Stack::pop() {
    if (top < 0) {
        std::cout << "Stack Underflow";
        return 0;
    }
    else {
        int x = a[top--];
        return x;
    }
}

int Stack::peek() {
    if (top < 0) {
        std::cout << "Stack is Empty";
        return 0;
    }
    else {
        int x = a[top];
        return x;
    }
}

bool Stack::isEmpty() {
    return (top < 0);
}

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    std::cout << s.pop() << " popped from stack\n";
    std::cout << "Top element is " << s.peek() << std::endl;
    std::cout << "Stack is " << (s.isEmpty() ? "empty" : "not empty") << std::endl;
    return 0;
}