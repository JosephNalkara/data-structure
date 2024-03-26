#include <iostream>
using namespace std;

template <typename T, int MAX_SIZE>
class DequeueArray {
private:
    T arr[MAX_SIZE];
    int front;
    int rear;
    int itemCount;

public:
    DequeueArray(); 
    void insertFront(T element);
    void insertRear(T element);
    T deleteFront();
    T deleteRear(); 
    void display();
    bool isEmpty();
    bool isFull(); 
};