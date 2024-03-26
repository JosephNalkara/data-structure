#include "LabCycle2-3.cpp"

int main() {
    const int MAX_SIZE = 5;
    QueueArray<int, MAX_SIZE> q;

    int choice;
    do {
        cout << "\nQueue Operations:\n";
        cout << "1. Enqueue\n";
        cout << "2. Dequeue\n";
        cout << "3. Is Empty\n";
        cout << "4. Is Full\n";
        cout << "5. Underflow\n";
        cout << "6. Overflow\n";
        cout << "7. Display\n";
        cout << "8. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int element;
                cout << "Enter element to enqueue: ";
                cin >> element;
                q.enqueue(element);
                break;
            }
            case 2: {
                int dequeuedElement = q.dequeue();
                if (dequeuedElement != -1)
                    cout << "Dequeued element: " << dequeuedElement << endl;
                break;
            }
            case 3:
                cout << (q.isEmpty() ? "Queue is empty.\n" : "Queue is not empty.\n");
                break;
            case 4:
                cout << (q.isFull() ? "Queue is full.\n" : "Queue is not full.\n");
                break;
            case 5:
                cout << (q.underflow() ? "Queue underflow!\n" : "No underflow.\n");
                break;
            case 6:
                cout << (q.overflow() ? "Queue overflow!\n" : "No overflow.\n");
                break;
            case 7:
                q.display();
                break;
            case 8:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 8);

    return 0;
}
