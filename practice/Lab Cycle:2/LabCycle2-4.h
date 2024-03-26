#include <iostream>
using namespace std;

template <typename T>
struct Node {
    T data;
    Node<T>* next;
};

template <typename T>
class QueueLinkedList {
private:
    Node<T>* front; 
    Node<T>* rear; 

public:
    QueueLinkedList(); 
    ~QueueLinkedList();
    void enqueue(T element); 
    T dequeue(); 
    bool isEmpty(); 
    bool isFull(); 
    bool underflow(); 
    bool overflow(); 
    void display(); 
};
