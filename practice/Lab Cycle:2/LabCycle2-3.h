#include <iostream>
using namespace std;

template <typename T, int MAX_SIZE>
class QueueArray {
private:
    T arr[MAX_SIZE];
    int front, rear; 

public:
    QueueArray(); 
    void enqueue(T element); 
    T dequeue(); 
    bool isEmpty(); 
    bool isFull();
    bool underflow(); 
    bool overflow(); 
    void display(); 
};