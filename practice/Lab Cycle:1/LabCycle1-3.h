#include <iostream>
using namespace std;

template<typename T>
class Array {
private:
    T *arr;
    int limit;
    int size;

public:
    Array();
    Array(int);
    ~Array();

    void insertAtBeginning(T);
    void insertAtEnd(T);
    void insertAtPosition(int, T);
    void deleteFromBeginning();
    void deleteFromEnd();
    void deleteFromPosition(int);
    int findIndex(T);
    void display();
    void leftRotate();
    void rightRotate();
    int frequencyCount(T);
    int countDistinct();
    int getSize();
};
