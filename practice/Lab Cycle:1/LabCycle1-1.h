#include <iostream>
using namespace std;

template<typename T>
class LinearArray {
private:
    T arr[100];
    int size;

public:
    LinearArray();
    bool isEmpty();
    bool isFull();
    void insertAtBeginning(T);
    void insertAtEnd(T);
    void insertAtPosition(int, T);
    void deleteFromBeginning();
    void deleteFromEnd();
    void deleteFromPosition(int);
    int findIndex(T);
    void display();
};
