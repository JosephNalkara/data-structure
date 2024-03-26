#include "LabCycle1-1.h"

using namespace std;

template<typename T>
LinearArray<T>::LinearArray() {
    size = 0;
}

template<typename T>
bool LinearArray<T>::isEmpty() {
    return size == 0;
}

template<typename T>
bool LinearArray<T>::isFull() {
    return size == 100;
}

template<typename T>
void LinearArray<T>::insertAtBeginning(T a) {
    if (!isFull()) {
        for (int i = size; i > 0; --i)
            arr[i] = arr[i - 1];
        arr[0] = a;
        ++size;
    } else {
        cout << "Array is full. Cannot insert at beginning." << endl;
    }
}

template<typename T>
void LinearArray<T>::insertAtEnd(T a) {
    if (!isFull()) {
        arr[size++] = a;
    } else {
        cout << "Array is full. Cannot insert at end." << endl;
    }
}

template<typename T>
void LinearArray<T>::insertAtPosition(int pos, T a) {
    if (pos >= 0 && pos <= size && !isFull()) {
        for (int i = size; i > pos; --i)
            arr[i] = arr[i - 1];
        arr[pos] = a;
        ++size;
    } else {
        cout << "Invalid pos or array is full. Cannot insert at specified pos." << endl;
    }
}

template<typename T>
void LinearArray<T>::deleteFromBeginning() {
    if (!isEmpty()) {
        for (int i = 0; i < size - 1; ++i)
            arr[i] = arr[i + 1];
        --size;
    } else {
        cout << "Array is empty. Cannot delete from beginning." << endl;
    }
}

template<typename T>
void LinearArray<T>::deleteFromEnd() {
    if (!isEmpty()) {
        --size;
    } else {
        cout << "Array is empty. Cannot delete from end." << endl;
    }
}

template<typename T>
void LinearArray<T>::deleteFromPosition(int pos) {
    if (pos >= 0 && pos < size) {
        for (int i = pos; i < size - 1; ++i)
            arr[i] = arr[i + 1];
        --size;
    } else {
        cout << "Invalid position. Cannot delete from specified position." << endl;
    }
}

template<typename T>
int LinearArray<T>::findIndex(T a) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == a)
            return i;
    }
    return -1;
}

template<typename T>
void LinearArray<T>::display() {
    if (!isEmpty()) {
        cout << "Array as: ";
        for (int i = 0; i < size; ++i)
            cout << arr[i] << " ";
        cout << endl;
    } else {
        cout << "Array is empty." << endl;
    }
}
