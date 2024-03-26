#include "LabCycle2-7.h"

template <typename T>
Deque<T>::Deque() {
    front = nullptr;
    rear = nullptr;
}

template <typename T>
Deque<T>::~Deque() {
    while (!isEmpty()) {
        deleteFront();
    }
}

template <typename T>
void Deque<T>::insertFront(T element) {
    Node<T>* newNode = new Node<T>;
    newNode->data = element;
    newNode->prev = nullptr;
    newNode->next = front;

    if (isEmpty()) {
        rear = newNode;
    } else {
        front->prev = newNode;
    }

    front = newNode;
    display();
}

template <typename T>
void Deque<T>::insertRear(T element) {
    Node<T>* newNode = new Node<T>;
    newNode->data = element;
    newNode->next = nullptr;
    newNode->prev = rear;

    if (isEmpty()) {
        front = newNode;
    } else {
        rear->next = newNode;
    }

    rear = newNode;
    display();
}

template <typename T>
T Deque<T>::deleteFront() {
    if (isEmpty()) {
        cout << "DEQUE Underflow!\n";
        return T(); 
    }

    Node<T>* temp = front;
    T deletedItem = temp->data;

    if (front == rear) {
        front = rear = nullptr;
    } else {
        front = front->next;
        front->prev = nullptr;
    }

    delete temp;
    display();
    return deletedItem;
}

template <typename T>
T Deque<T>::deleteRear() {
    if (isEmpty()) {
        cout << "DEQUE Underflow!\n";
        return T(); 
    }

    Node<T>* temp = rear;
    T deletedItem = temp->data;

    if (front == rear) {
        front = rear = nullptr;
    } else {
        rear = rear->prev;
        rear->next = nullptr;
    }

    delete temp;
    display();
    return deletedItem;
}

template <typename T>
void Deque<T>::display() {
    if (isEmpty()) {
        cout << "DEQUE is empty.\n";
        return;
    }

    cout << "DEQUE elements: ";
    Node<T>* current = front;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

template <typename T>
bool Deque<T>::isEmpty() {
    return front == nullptr;
}
