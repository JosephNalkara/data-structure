#include<iostream>
using namespace std;

template <typename T>
struct Node {
    T data;
    Node<T>* next;
};

template <typename T>
class DequeueLinkedList {
private:
    Node<T>* front;
    Node<T>* rear;

public:
    DequeueLinkedList();
    ~DequeueLinkedList();
    void insertFront(T element); 
    void insertRear(T element);
    T deleteFront();
    T deleteRear(); 
    bool isEmpty();
    void display(); 
};
