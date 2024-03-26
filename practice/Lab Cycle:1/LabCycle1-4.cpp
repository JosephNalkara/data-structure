#include "LabCycle1-4.h"

template<typename T>
LinkedList<T>::LinkedList() : head(nullptr) {}

template<typename T>
LinkedList<T>::~LinkedList() {
    Node<T>* current = head;
    while (current != nullptr) {
        Node<T>* next = current->next;
        delete current;
        current = next;
    }
    head = nullptr;
}

template<typename T>
void LinkedList<T>::insertAtBeginning(const T& p) {
    Node<T>* newNode = new Node<T>(p);
    newNode->next = head;
    head = newNode;
}

template<typename T>
void LinkedList<T>::insertAtEnd(const T& p) {
    Node<T>* newNode = new Node<T>(p);
    if (head == nullptr) {
        head = newNode;
        return;
    }
    Node<T>* current = head;
    while (current->next != nullptr) {
        current = current->next;
    }
    current->next = newNode;
}

template<typename T>
void LinkedList<T>::insertAtPosition(int pos, const T& p) {
    if (pos < 0) {
        cout << "Invalid position. Insertion failed." << endl;
        return;
    }
    if (pos == 0) {
        insertAtBeginning(p);
        return;
    }
    Node<T>* newNode = new Node<T>(p);
    Node<T>* current = head;
    for (int i = 0; i < pos - 1 && current != nullptr; ++i) {
        current = current->next;
    }
    if (current == nullptr) {
        cout << "Invalid position. Insertion failed." << endl;
        return;
    }
    newNode->next = current->next;
    current->next = newNode;
}

template<typename T>
void LinkedList<T>::deleteFromBeginning() {
    if (head == nullptr) {
        cout << "List is empty. Cannot delete from beginning." << endl;
        return;
    }
    Node<T>* temp = head;
    head = head->next;
    delete temp;
}

template<typename T>
void LinkedList<T>::deleteFromEnd() {
    if (head == nullptr) {
        cout << "List is empty. Cannot delete from end." << endl;
        return;
    }
    if (head->next == nullptr) {
        delete head;
        head = nullptr;
        return;
    }
    Node<T>* current = head;
    while (current->next->next != nullptr) {
        current = current->next;
    }
    delete current->next;
    current->next = nullptr;
}

template<typename T>
void LinkedList<T>::deleteFromPosition(int pos) {
    if (head == nullptr || pos < 0) {
        cout << "Invalid position. Deletion failed." << endl;
        return;
    }
    if (pos == 0) {
        deleteFromBeginning();
        return;
    }
    Node<T>* current = head;
    for (int i = 0; i < pos - 1 && current->next != nullptr; ++i) {
        current = current->next;
    }
    if (current->next == nullptr) {
        cout << "Invalid position. Deletion failed." << endl;
        return;
    }
    Node<T>* temp = current->next;
    current->next = current->next->next;
    delete temp;
}

template<typename T>
void LinkedList<T>::display() {
    if (head == nullptr) {
        cout << "List is empty." << endl;
        return;
    }
    Node<T>* current = head;
    cout << "List elements: ";
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}
