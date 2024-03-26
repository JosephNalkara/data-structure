#include "LabCycle2-2.h"

template <typename T>
StackLinkedList<T>::StackLinkedList() {
    top = nullptr; 
}

template <typename T>
StackLinkedList<T>::~StackLinkedList() {
    Node<T>* temp;
    while (top != nullptr) {
        temp = top;
        top = top->next;
        delete temp;
    }
}

template <typename T>
void StackLinkedList<T>::push(T element) {
    Node<T>* newNode = new Node<T>;
    newNode->data = element;
    newNode->next = top;
    top = newNode;
}

template <typename T>
T StackLinkedList<T>::pop() {
    if (isEmpty()) {
        cout << "Stack Underflow!\n";
        return T(); 
    }
    T poppedElement = top->data;
    Node<T>* temp = top;
    top = top->next;
    delete temp;
    return poppedElement;
}

template <typename T>
bool StackLinkedList<T>::isEmpty() {
    return top == nullptr;
}

template <typename T>
bool StackLinkedList<T>::isFull() {
    return false;
}

template <typename T>
void StackLinkedList<T>::display() {
    if (isEmpty()) {
        cout << "Stack is empty.\n";
        return;
    }
    cout << "Stack elements: ";
    Node<T>* current = top;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}
