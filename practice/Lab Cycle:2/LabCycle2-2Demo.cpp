#include "LabCycle2-2.cpp"

int main() {
    StackLinkedList<int> s;

    int choice;
    do {
        cout << "\nStack Operations:\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Is Empty\n";
        cout << "4. Is Full\n";
        cout << "5. Display\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int element;
                cout << "Enter element to push: ";
                cin >> element;
                s.push(element);
                break;
            }
            case 2: {
                int poppedElement = s.pop();
                if (poppedElement != -1)
                    cout << "Popped element: " << poppedElement << endl;
                break;
            }
            case 3:
                cout << (s.isEmpty() ? "Stack is empty.\n" : "Stack is not empty.\n");
                break;
            case 4:
                cout << (s.isFull() ? "Stack is full.\n" : "Stack is not full.\n");
                break;
            case 5:
                s.display();
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
