#include <iostream>
using namespace std;

template<typename T>
struct Node {
    T a;
    Node<T>* p;
    Node<T>* q;
};

template<typename T>
class DoublyLinkedList {
private:
    Node<T>* head;
    Node<T>* tail;
public:
    DoublyLinkedList();
    ~DoublyLinkedList();

    void insertAtBeginning(T a);
    void insertAtEnd(T a);
    void insertAtPosition(int pos, T a);
    void deleteFromBeginning();
    void deleteFromEnd();
    void deleteFromPosition(int pos);
    void display();
};

