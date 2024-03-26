#include <iostream>
using namespace std;

template<typename T>
struct Node {
    T data;
    Node<T>* next;
    
    Node(const T& p) : data(p), next(nullptr) {}
};

template<typename T>
class LinkedList {
private:
    Node<T>* head;
    
public:
    LinkedList();
    ~LinkedList();
    
    void insertAtBeginning(const T&);
    void insertAtEnd(const T&);
    void insertAtPosition(int, const T&);
    void deleteFromBeginning();
    void deleteFromEnd();
    void deleteFromPosition(int);
    void display();
};