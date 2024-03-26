#include "LabCycle2-1.h"

template <typename T, int MAX_SIZE>
Stack<T, MAX_SIZE>::Stack() {
    top = -1;
}

template <typename T, int MAX_SIZE>
void Stack<T, MAX_SIZE>::push(T element) {
    if (isFull()) {
        cout << "Stack Overflow!\n";
        return;
    }
    arr[++top] = element;
}

template <typename T, int MAX_SIZE>
T Stack<T, MAX_SIZE>::pop() {
    if (isEmpty()) {
        cout << "Stack Underflow!\n";
        return T();
    }
    return arr[top--];
}

template <typename T, int MAX_SIZE>
bool Stack<T, MAX_SIZE>::isEmpty() {
    return top == -1;
}

template <typename T, int MAX_SIZE>
bool Stack<T, MAX_SIZE>::isFull() {
    return top == MAX_SIZE - 1;
}

template <typename T, int MAX_SIZE>
bool Stack<T, MAX_SIZE>::underflow() {
    return isEmpty();
}

template <typename T, int MAX_SIZE>
bool Stack<T, MAX_SIZE>::overflow() {
    return isFull();
}

template <typename T, int MAX_SIZE>
void Stack<T, MAX_SIZE>::display() {
    if (isEmpty()) {
        cout << "Stack is empty.\n";
        return;
    }
    cout << "Stack elements: ";
    for (int i = 0; i <= top; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
