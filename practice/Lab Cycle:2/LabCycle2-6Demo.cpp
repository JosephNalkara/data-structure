#include "LabCycle2-6.cpp"

int main() {
    DequeueLinkedList<int> dq;

    int choice;
    do {
        cout << "\nDEQUEUE Operations:\n";
        cout << "1. Insert Front\n";
        cout << "2. Insert Rear\n";
        cout << "3. Delete Front\n";
        cout << "4. Delete Rear\n";
        cout << "5. Is Empty\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int element;
                cout << "Enter element to insert at front: ";
                cin >> element;
                dq.insertFront(element);
                break;
            }
            case 2: {
                int element;
                cout << "Enter element to insert at rear: ";
                cin >> element;
                dq.insertRear(element);
                break;
            }
            case 3:
                cout << "Deleted element from front: " << dq.deleteFront() << endl;
                break;
            case 4:
                cout << "Deleted element from rear: " << dq.deleteRear() << endl;
                break;
            case 5:
                cout << (dq.isEmpty() ? "DEQUEUE is empty.\n" : "DEQUEUE is not empty.\n");
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
