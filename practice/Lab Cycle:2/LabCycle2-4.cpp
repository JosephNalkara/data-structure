#include "LabCycle2-4.h"
#include <iostream>

using namespace std;

template <typename T>
QueueLinkedList<T>::QueueLinkedList() {
    front = nullptr;
    rear = nullptr;
}

template <typename T>
QueueLinkedList<T>::~QueueLinkedList() {
    Node<T>* temp;
    while (front != nullptr) {
        temp = front;
        front = front->next;
        delete temp;
    }
    rear = nullptr; 
}

template <typename T>
void QueueLinkedList<T>::enqueue(T element) {
    Node<T>* newNode = new Node<T>;
    newNode->data = element;
    newNode->next = nullptr;

    if (rear == nullptr) {
        front = rear = newNode;
    } else {
        rear->next = newNode;
        rear = newNode;
    }
}

template <typename T>
T QueueLinkedList<T>::dequeue() {
    if (isEmpty()) {
        cout << "Queue Underflow!\n";
        return T(); 
    }
    T dequeuedElement = front->data;
    Node<T>* temp = front;
    front = front->next;
    if (front == nullptr) {
        rear = nullptr; 
    }
    delete temp;
    return dequeuedElement;
}

template <typename T>
bool QueueLinkedList<T>::isEmpty() {
    return front == nullptr;
}

template <typename T>
bool QueueLinkedList<T>::isFull() {
    return false; 
}

template <typename T>
bool QueueLinkedList<T>::underflow() {
    return isEmpty();
}

template <typename T>
bool QueueLinkedList<T>::overflow() {
    return false;
}

template <typename T>
void QueueLinkedList<T>::display() {
    if (isEmpty()) {
        cout << "Queue is empty.\n";
        return;
    }
    cout << "Queue elements: ";
    Node<T>* current = front;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}
