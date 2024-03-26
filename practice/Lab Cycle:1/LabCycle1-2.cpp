#include "LabCycle1-2.h"

template<typename T>
Array<T>::Array(int limit) {
    this->limit = limit;
    arr = new T[limit];
    size = 0;
}

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
    if (pos < 0 || pos> size) {
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
    cout << "Array elements: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

template<typename T>
int Array<T>::linearSearch(T a) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == a) {
            return i;
        }
    }
    return -1;
}

template<typename T>
int Array<T>::binarySearch(T a) {
    int LB = 0;
    int UB = size - 1;
    while (LB <= UB) {
        int mid = LB + (UB - LB) / 2;
        if (arr[mid] == a) {
            return mid;
        }
        else if (arr[mid] < a) {
            LB = mid + 1;
        }
        else {
            UB = mid - 1;
        }
    }
    return -1;
}

template<typename T>
void Array<T>::bubbleSort() {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

template<typename T>
void Array<T>::insertionSort() {
    for (int i = 1; i < size; ++i) {
        T key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = key;
    }
}

template<typename T>
void Array<T>::selectionSort() {
    for (int i = 0; i < size - 1; ++i) {
        int minIndex = i;
        for (int j = i + 1; j < size; ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}

template<typename T>
void Array<T>::mergeSort(int LB, int UB) {
    if (LB < UB) {
        int mid = LB + (UB - LB) / 2;
        mergeSort(LB, mid);
        mergeSort(mid + 1, UB);
        merge(LB, mid, UB);
    }
}

template<typename T>
void Array<T>::merge(int LB, int mid, int UB) {
    int n1 = mid - LB + 1;
    int n2 = UB - mid;

    T left[n1], right[n2];

    for (int i = 0; i < n1; ++i)
        left[i] = arr[LB + i];
    for (int j = 0; j < n2; ++j)
        right[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = LB;
    while (i < n1 && j < n2) {
        if (left[i] <= right[j]) {
            arr[k] = left[i];
            ++i;
        }
        else {
            arr[k] = right[j];
            ++j;
        }
        ++k;
    }

    while (i < n1) {
        arr[k] = left[i];
        ++i;
        ++k;
    }

    while (j < n2) {
        arr[k] = right[j];
        ++j;
        ++k;
    }
}

template<typename T>
void Array<T>::quickSort(int LB, int UB) {
    if (LB < UB) {
        int pi = partition(LB, UB);
        quickSort(LB, pi - 1);
        quickSort(pi + 1, UB);
    }
}

template<typename T>
int Array<T>::partition(int LB, int UB) {
    T pivot = arr[UB];
    int i = LB - 1;
    for (int j = LB; j < UB; ++j) {
        if (arr[j] < pivot) {
            ++i;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[UB]);
    return i + 1;
}

template<typename T>    
int Array<T>::getSize() {
    return size;
}