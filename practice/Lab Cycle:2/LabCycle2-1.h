#include <iostream>
using namespace std;

template <typename T, int MAX_SIZE>
class Stack {
private:
    T arr[MAX_SIZE]; 
    int top; 

public:
    Stack();
    void push(T element);
    T pop();
    bool isEmpty();
    bool isFull();
    bool underflow(); 
    bool overflow();
    void display(); 
};
