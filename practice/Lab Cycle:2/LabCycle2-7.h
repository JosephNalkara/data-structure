#include <iostream>
using namespace std;

template <typename T>
struct Node {
    T data;
    Node<T>* prev;
    Node<T>* next;
};

template <typename T>
class Deque {
private:
    Node<T>* front;
    Node<T>* rear;

public:
    Deque(); 
    ~Deque();
    void insertFront(T element); 
    void insertRear(T element); 
    T deleteFront(); 
    T deleteRear();
    void display(); 
    bool isEmpty(); 
};