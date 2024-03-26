#include "LabCycle2-5.h"

template <typename T, int MAX_SIZE>
DequeueArray<T, MAX_SIZE>::DequeueArray() {
    front = -1;
    rear = -1;
    itemCount = 0;
}

template <typename T, int MAX_SIZE>
void DequeueArray<T, MAX_SIZE>::insertFront(T element) {
    if (isFull()) {
        cout << "DEQUEUE Overflow!\n";
        return;
    }
    if (front == -1) {
        front = rear = 0;
    } else if (front == 0) {
        front = MAX_SIZE - 1;
    } else {
        front--;
    }
    arr[front] = element;
    itemCount++;
    display();
}

template <typename T, int MAX_SIZE>
void DequeueArray<T, MAX_SIZE>::insertRear(T element) {
    if (isFull()) {
        cout << "DEQUEUE Overflow!\n";
        return;
    }
    if (rear == -1) {
        front = rear = 0;
    } else if (rear == MAX_SIZE - 1) {
        rear = 0;
    } else {
        rear++;
    }
    arr[rear] = element;
    itemCount++;
    display();
}

template <typename T, int MAX_SIZE>
T DequeueArray<T, MAX_SIZE>::deleteFront() {
    if (isEmpty()) {
        cout << "DEQUEUE Underflow!\n";
        return T(); 
    }
    T deletedItem = arr[front];
    if (front == rear) {
        front = rear = -1;
    } else if (front == MAX_SIZE - 1) {
        front = 0;
    } else {
        front++;
    }
    itemCount--;
    display();
    return deletedItem;
}

template <typename T, int MAX_SIZE>
T DequeueArray<T, MAX_SIZE>::deleteRear() {
    if (isEmpty()) {
        cout << "DEQUEUE Underflow!\n";
        return T(); 
    }
    T deletedItem = arr[rear];
    if (front == rear) {
        front = rear = -1;
    } else if (rear == 0) {
        rear = MAX_SIZE - 1;
    } else {
        rear--;
    }
    itemCount--;
    display();
    return deletedItem;
}

template <typename T, int MAX_SIZE>
bool DequeueArray<T, MAX_SIZE>::isEmpty() {
    return itemCount == 0;
}

template <typename T, int MAX_SIZE>
bool DequeueArray<T, MAX_SIZE>::isFull() {
    return itemCount == MAX_SIZE;
}

template <typename T, int MAX_SIZE>
void DequeueArray<T, MAX_SIZE>::display() {
    if (isEmpty()) {
        cout << "DEQUEUE is empty.\n";
        return;
    }
    cout << "DEQUEUE elements: ";
    int i = front;
    do {
        cout << arr[i] << " ";
        i = (i + 1) % MAX_SIZE;
    } while (i != (rear + 1) % MAX_SIZE);
    cout << endl;
}
