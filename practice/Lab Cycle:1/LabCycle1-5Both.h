#include <iostream>
using namespace std;

template<typename T>
class CircularDoublyLinkedList {
private:
    struct Node {
        T data;
        Node* p;
        Node* q;
    };
    Node* head;
public:
    CircularDoublyLinkedList();
    ~CircularDoublyLinkedList();

    void insertAtBeginning(T data);
    void insertAtEnd(T data);
    void insertAtPosition(int pos, T data);
    void deleteFromBeginning();
    void deleteFromEnd();
    void deleteFromPosition(int pos);
    void display();
};

