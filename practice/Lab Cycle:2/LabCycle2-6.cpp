#include "LabCycle2-6.h"

template <typename T>
DequeueLinkedList<T>::DequeueLinkedList() {
    front = nullptr;
    rear = nullptr;
}

template <typename T>
DequeueLinkedList<T>::~DequeueLinkedList() {
    Node<T>* temp;
    while (front != nullptr) {
        temp = front;
        front = front->next;
        delete temp;
    }
    rear = nullptr; 
}

template <typename T>
void DequeueLinkedList<T>::insertFront(T element) {
    Node<T>* newNode = new Node<T>;
    newNode->data = element;
    newNode->next = front;
    if (isEmpty()) {
        rear = newNode;
    }
    front = newNode;
    display();
}

template <typename T>
void DequeueLinkedList<T>::insertRear(T element) {
    Node<T>* newNode = new Node<T>;
    newNode->data = element;
    newNode->next = nullptr;
    if (isEmpty()) {
        front = newNode;
    } else {
        rear->next = newNode;
    }
    rear = newNode;
    display();
}

template <typename T>
T DequeueLinkedList<T>::deleteFront() {
    if (isEmpty()) {
        cout << "DEQUEUE Underflow!\n";
        return T(); 
    }
    T deletedItem = front->data;
    Node<T>* temp = front;
    front = front->next;
    delete temp;
    if (front == nullptr) {
        rear = nullptr;
    }
    display();
    return deletedItem;
}

template <typename T>
T DequeueLinkedList<T>::deleteRear() {
    if (isEmpty()) {
        cout << "DEQUEUE Underflow!\n";
        return T(); 
    }
    T deletedItem;
    if (front == rear) {
        deletedItem = front->data;
        delete front;
        front = rear = nullptr;
    } else {
        Node<T>* temp = front;
        while (temp->next != rear) {
            temp = temp->next;
        }
        deletedItem = rear->data;
        delete rear;
        rear = temp;
        rear->next = nullptr;
    }
    display();
    return deletedItem;
}

template <typename T>
bool DequeueLinkedList<T>::isEmpty() {
    return front == nullptr;
}

template <typename T>
void DequeueLinkedList<T>::display() {
    if (isEmpty()) {
        cout << "DEQUEUE is empty.\n";
        return;
    }
    cout << "DEQUEUE elements: ";
    Node<T>* current = front;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}
