#include <iostream>
using namespace std;

template <typename T>
struct Node {
    T data;
    Node<T>* next;
};

template <typename T>
class StackLinkedList {
private:
    Node<T>* top; 

public:
    StackLinkedList(); 
    ~StackLinkedList(); 
    void push(T element); 
    T pop(); 
    bool isEmpty();
    bool isFull(); 
    void display(); 
};