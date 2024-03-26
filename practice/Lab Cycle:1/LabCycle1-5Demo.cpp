#include "LabCycle1-5DLL.cpp"
#include "LabCycle1-5CLL.cpp"
#include "LabCycle1-5Both.cpp"

int main() {
    char choice;
    int data, pos;

    DoublyLinkedList<int> doublyList;
    CircularLinkedList<int> circularList;
    CircularDoublyLinkedList<int> circularDoublyList;

    do {
        cout << "\nMenu:\n";
        cout << "1. Doubly Linked List\n";
        cout << "2. Circular Linked List\n";
        cout << "3. Circular Doubly Linked List\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case '1':
                cout << "\nDoubly Linked List Operations:\n";
                cout << "a. Insert at Beginning\n";
                cout << "b. Insert at End\n";
                cout << "c. Insert at a specified Position\n";
                cout << "d. Delete from Beginning\n";
                cout << "e. Delete from End\n";
                cout << "f. Delete from a specified Position\n";
                cout << "g. Display\n";
                cout << "h. Go Back\n";
                cout << "Enter your choice: ";
                cin >> choice;

                switch (choice) {
                    case 'a':
                        cout << "Enter data to insert at the beginning: ";
                        cin >> data;
                        doublyList.insertAtBeginning(data);
                        break;
                    case 'b':
                        cout << "Enter data to insert at the end: ";
                        cin >> data;
                        doublyList.insertAtEnd(data);
                        break;
                    case 'c':
                        cout << "Enter position to insert data: ";
                        cin >> pos;
                        cout << "Enter data to insert: ";
                        cin >> data;
                        doublyList.insertAtPosition(pos, data);
                        break;
                    case 'd':
                        doublyList.deleteFromBeginning();
                        break;
                    case 'e':
                        doublyList.deleteFromEnd();
                        break;
                    case 'f':
                        cout << "Enter position to delete data: ";
                        cin >> pos;
                        doublyList.deleteFromPosition(pos);
                        break;
                    case 'g':
                        doublyList.display();
                        break;
                    case 'h':
                        return 0;
                    default:
                        cout << "Invalid choice. Please try again." << endl;
                }
                break;

            case '2':
                cout << "\nCircular Linked List Operations:\n";
                cout << "a. Insert at Beginning\n";
                cout << "b. Insert at End\n";
                cout << "c. Insert at a specified Position\n";
                cout << "d. Delete from Beginning\n";
                cout << "e. Delete from End\n";
                cout << "f. Delete from a specified Position\n";
                cout << "g. Display\n";
                cout << "Enter your choice: ";
                cin >> choice;

                switch (choice) {
                    case 'a':
                        cout << "Enter data to insert at the beginning: ";
                        cin >> data;
                        circularList.insertAtBeginning(data);
                        break;
                    case 'b':
                        cout << "Enter data to insert at the end: ";
                        cin >> data;
                        circularList.insertAtEnd(data);
                        break;
                    case 'c':
                        cout << "Enter position to insert data: ";
                        cin >> pos;
                        cout << "Enter data to insert: ";
                        cin >> data;
                        circularList.insertAtPosition(pos, data);
                        break;
                    case 'd':
                        circularList.deleteFromBeginning();
                        break;
                    case 'e':
                        circularList.deleteFromEnd();
                        break;
                    case 'f':
                        cout << "Enter position to delete data: ";
                        cin >> pos;
                        circularList.deleteFromPosition(pos);
                        break;
                    case 'g':
                        circularList.display();
                        break;
                    case 'h':
                        return 0;
                    default:
                        cout << "Invalid choice. Please try again." << endl;
                }
                break;

            case '3':
                cout << "\nCircular Doubly Linked List Operations:\n";
                cout << "a. Insert at Beginning\n";
                cout << "b. Insert at End\n";
                cout << "c. Insert at a specified Position\n";
                cout << "d. Delete from Beginning\n";
                cout << "e. Delete from End\n";
                cout << "f. Delete from a specified Position\n";
                cout << "g. Display\n";
                cout << "Enter your choice: ";
                cin >> choice;

                switch (choice) {
                    case 'a':
                        cout << "Enter data to insert at the beginning: ";
                        cin >> data;
                        circularDoublyList.insertAtBeginning(data);
                        break;
                    case 'b':
                        cout << "Enter data to insert at the end: ";
                        cin >> data;
                        circularDoublyList.insertAtEnd(data);
                        break;
                    case 'c':
                        cout << "Enter position to insert data: ";
                        cin >> pos;
                        cout << "Enter data to insert: ";
                        cin >> data;
                        circularDoublyList.insertAtPosition(pos, data);
                        break;
                    case 'd':
                        circularDoublyList.deleteFromBeginning();
                        break;
                    case 'e':
                        circularDoublyList.deleteFromEnd();
                        break;
                    case 'f':
                        cout << "Enter position to delete data: ";
                        cin >> pos;
                        circularDoublyList.deleteFromPosition(pos);
                        break;
                    case 'g':
                        circularDoublyList.display();
                        break;
                    case 'h':
                        return 0;
                    default:
                        cout << "Invalid choice. Please try again." << endl;
                }
                break;

            case '4':
                cout << "Exiting the program." << endl;
                break;

            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != '4');

    return 0;
}
