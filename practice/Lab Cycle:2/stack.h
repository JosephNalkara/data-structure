


#include <iostream>

template<typename T>
class Stack {
    int TotalSize;
    int CurrentSize;
    T* arr;
public:
    Stack(int size);
    ~Stack();
    bool isEmpty();
    bool isFull();
    void push(T data);
    T pop();
    T peek();
};

