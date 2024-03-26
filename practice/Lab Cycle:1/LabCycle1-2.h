#include <iostream>
using namespace std;

template<typename T>
class Array {
private:
    T *arr;
    int limit;
    int size;

public:
    Array() : limit(100), size(0), arr(new T[limit]) {}
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

    int linearSearch(T);
    int binarySearch(T);

    void bubbleSort();
    void insertionSort();
    void selectionSort();
    void mergeSort(int, int);
    void quickSort(int, int);
    int getSize();

private:
    void merge(int, int, int);
    int partition(int, int);
};