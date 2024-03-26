#include "LabCycle2-4.cpp"

int main() {
    QueueLinkedList<int> q;

    int choice;
    do {
        cout << "\nQueue Operations:\n";
        cout << "1. Enqueue\n";
        cout << "2. Dequeue\n";
        cout << "3. Is Empty\n";
        cout << "4. Is Full\n";
        cout << "5. Display\n";
        cout << "6. Exit\n";
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
                q.display();
                break;
            case 6:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 6);

    return 0;
}
