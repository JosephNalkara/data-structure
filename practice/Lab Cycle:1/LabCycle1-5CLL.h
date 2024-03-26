#include <iostream>
using namespace std;

template<typename T>
class CircularLinkedList {
private:
    struct Node {
        T a;
        Node* q;
    };
    Node* head;
public:
    CircularLinkedList();
    ~CircularLinkedList();

    void insertAtBeginning(T a);
    void insertAtEnd(T a);
    void insertAtPosition(int pos, T a);
    void deleteFromBeginning();
    void deleteFromEnd();
    void deleteFromPosition(int pos);
    void display();
};

