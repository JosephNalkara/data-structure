#include "LabCycle1-5Both.h"

template<typename T>
CircularDoublyLinkedList<T>::CircularDoublyLinkedList() : head(nullptr) {}

template<typename T>
CircularDoublyLinkedList<T>::~CircularDoublyLinkedList() {
    if (head != nullptr) {
        Node* temp = head->q;
        while (temp != head) {
            Node* q = temp->q;
            delete temp;
            temp = q;
        }
        delete head;
    }
}

template<typename T>
void CircularDoublyLinkedList<T>::insertAtBeginning(T data) {
    Node* newNode = new Node;
    newNode->data = data;
    if (head == nullptr) {
        head = newNode;
        newNode->p = newNode;
        newNode->q = newNode;
    } else {
        Node* last = head->p;
        newNode->q = head;
        head->p = newNode;
        newNode->p = last;
        last->q = newNode;
        head = newNode;
    }
}

template<typename T>
void CircularDoublyLinkedList<T>::insertAtEnd(T data) {
    Node* newNode = new Node;
    newNode->data = data;
    if (head == nullptr) {
        head = newNode;
        newNode->p = newNode;
        newNode->q = newNode;
    } else {
        Node* last = head->p;
        newNode->q = head;
        head->p = newNode;
        newNode->p = last;
        last->q = newNode;
    }
}

template<typename T>
void CircularDoublyLinkedList<T>::insertAtPosition(int pos, T data) {
    if (pos < 0) {
        cout << "Invalid position. Insertion failed." << endl;
        return;
    }

    if (pos == 0) {
        insertAtBeginning(data);
    } else {
        Node* newNode = new Node;
        newNode->data = data;

        Node* current = head;
        int count = 0;

        while (current->q != head && count < pos - 1) {
            current = current->q;
            ++count;
        }

        newNode->q = current->q;
        newNode->p = current;
        current->q->p = newNode;
        current->q = newNode;
    }
}

template<typename T>
void CircularDoublyLinkedList<T>::deleteFromBeginning() {
    if (head == nullptr) {
        cout << "List is empty. Deletion failed." << endl;
        return;
    }

    if (head->q == head) {
        delete head;
        head = nullptr;
    } else {
        Node* temp = head;
        Node* last = head->p;
        head = head->q;
        head->p = last;
        last->q = head;
        delete temp;
    }
}

template<typename T>
void CircularDoublyLinkedList<T>::deleteFromEnd() {
    if (head == nullptr) {
        cout << "List is empty. Deletion failed." << endl;
        return;
    }

    if (head->q == head) {
        delete head;
        head = nullptr;
    } else {
        Node* temp = head->p;
        Node* p = temp->p;
        p->q = head;
        head->p = p;
        delete temp;
    }
}

template<typename T>
void CircularDoublyLinkedList<T>::deleteFromPosition(int pos) {
    if (head == nullptr || pos < 0) {
        cout << "Invalid position. Deletion failed." << endl;
        return;
    }

    if (pos == 0) {
        deleteFromBeginning();
    } else {
        Node* current = head;
        int count = 0;

        while (current->q != head && count < pos) {
            current = current->q;
            ++count;
        }

        if (count < pos) {
            cout << "Invalid position. Deletion failed." << endl;
            return;
        }

        Node* p = current->p;
        p->q = current->q;
        current->q->p = p;
        delete current;
    }
}

template<typename T>
void CircularDoublyLinkedList<T>::display() {
    if (head == nullptr) {
        cout << "List is empty." << endl;
        return;
    }

    Node* temp = head;
    do {
        cout << temp->data << " ";
        temp = temp->q;
    } while (temp != head);
    cout << endl;
}
