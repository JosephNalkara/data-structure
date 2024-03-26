#include "LabCycle1-3.h"

template<typename T>
Array<T>::Array() : limit(100), size(0), arr(new T[limit]) {}

template<typename T>
Array<T>::Array(int limit) : limit(limit), size(0), arr(new T[limit]) {}

template<typename T>
Array<T>::~Array() {
    delete[] arr;
}

template<typename T>
void Array<T>::insertAtBeginning(T a) {
    if (size == limit) {
        cout << "Array is full. Cannot insert element at beginning." << endl;
        return;
    }
    for (int i = size; i > 0; --i) {
        arr[i] = arr[i - 1];
    }
    arr[0] = a;
    ++size;
}

template<typename T>
void Array<T>::insertAtEnd(T a) {
    if (size == limit) {
        cout << "Array is full. Cannot insert element at end." << endl;
        return;
    }
    arr[size] = a;
    ++size;
}

template<typename T>
void Array<T>::insertAtPosition(int pos, T a) {
    if (pos < 0 || pos > size) {
        cout << "Invalid position. Insertion failed." << endl;
        return;
    }
    if (size == limit) {
        cout << "Array is full. Cannot insert element at specified position." << endl;
        return;
    }
    for (int i = size; i > pos; --i) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = a;
    ++size;
}

template<typename T>
void Array<T>::deleteFromBeginning() {
    if (size == 0) {
        cout << "Array is empty. Cannot delete element from beginning." << endl;
        return;
    }
    for (int i = 0; i < size - 1; ++i) {
        arr[i] = arr[i + 1];
    }
    --size;
}

template<typename T>
void Array<T>::deleteFromEnd() {
    if (size == 0) {
        cout << "Array is empty. Cannot delete element from end." << endl;
        return;
    }
    --size;
}

template<typename T>
void Array<T>::deleteFromPosition(int pos) {
    if (pos < 0 || pos >= size) {
        cout << "Invalid position. Deletion failed." << endl;
        return;
    }
    for (int i = pos; i < size - 1; ++i) {
        arr[i] = arr[i + 1];
    }
    --size;
}

template<typename T>
int Array<T>::findIndex(T a) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == a) {
            return i;
        }
    }
    return -1;
}

template<typename T>
void Array<T>::display() {
    if (size == 0) {
        cout << "Array is empty." << endl;
        return;
    }
    cout << "Array as: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

template<typename T>
void Array<T>::leftRotate() {
    if (size == 0) {
        cout << "Array is empty. Cannot perform left rotation." << endl;
        return;
    }
    T temp = arr[0];
    for (int i = 0; i < size - 1; ++i) {
        arr[i] = arr[i + 1];
    }
    arr[size - 1] = temp;
}

template<typename T>
void Array<T>::rightRotate() {
    if (size == 0) {
        cout << "Array is empty. Cannot perform right rotation." << endl;
        return;
    }
    T temp = arr[size - 1];
    for (int i = size - 1; i > 0; --i) {
        arr[i] = arr[i - 1];
    }
    arr[0] = temp;
}

template<typename T>
int Array<T>::frequencyCount(T a) {
    int count = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] == a) {
            ++count;
        }
    }
    return count;
}

template<typename T>
int Array<T>::countDistinct() {
    int distinctCount = 0;
    for (int i = 0; i < size; ++i) {
        bool isDistinct = true;
        for (int j = 0; j < i; ++j) {
            if (arr[i] == arr[j]) {
                isDistinct = false;
                break;
            }
        }
        if (isDistinct) {
            ++distinctCount;
        }
    }
    return distinctCount;
}

template<typename T>
int Array<T>::getSize() {
    return size;
}

