#include "stack.h"

template<typename T>
Stack<T>::Stack(int size) {
    this->TotalSize = size;
    this->CurrentSize = 0;
    this->arr = new T[TotalSize];
}

template<typename T>
Stack<T>::~Stack() {
    delete[] arr;
}

template<typename T>
bool Stack<T>::isEmpty() {
    return this->CurrentSize == 0;
}

template<typename T>
bool Stack<T>::isFull() {
    return this->CurrentSize == this->TotalSize;
}

template<typename T>
void Stack<T>::push(T data) {
    if (isFull()) {
        std::cout << "Stack is full" << std::endl;
        return;
    }
    else {
        this->arr[this->CurrentSize] = data;
        this->CurrentSize++;
    }
}

template<typename T>
T Stack<T>::pop() {
    if (isEmpty()) {
        std::cout << "Stack is empty" << std::endl;
        return T();
    }
    else {
        this->CurrentSize--;
        return this->arr[this->CurrentSize];
    }
}

template<typename T>
T Stack<T>::peek() {
    if (isEmpty()) {
        std::cout << "Stack is empty" << std::endl;
        return T();
    }
    else {
        return this->arr[this->CurrentSize - 1];
    }
}
