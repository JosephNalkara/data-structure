#include "LabCycle1-3.cpp"

using namespace std;

int main() {
    Array<int> arr;

    int choice;
    int a, pos;

    do {
        cout << "\nMenu:\n";
        cout << "1. Insertion at Beginning\n";
        cout << "2. Insertion at End\n";
        cout << "3. Insertion at a specified position\n";
        cout << "4. Deletion from Beginning\n";
        cout << "5. Deletion from End\n";
        cout << "6. Deletion from a specified position\n";
        cout << "7. Find the index of a given element\n";
        cout << "8. Display\n";
        cout << "9. Left Rotate\n";
        cout << "10. Right Rotate\n";
        cout << "11. Frequency Count\n";
        cout << "12. Count Distinct Elements\n";
        cout << "0. Quit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter element to insert at beginning: ";
                cin >> a;
                arr.insertAtBeginning(a);
                break;
            case 2:
                cout << "Enter element to insert at end: ";
                cin >> a;
                arr.insertAtEnd(a);
                break;
            case 3:
                cout << "Enter position to insert element: ";
                cin >> pos;
                cout << "Enter element to insert: ";
                cin >> a;
                arr.insertAtPosition(pos, a);
                break;
            case 4:
                arr.deleteFromBeginning();
                break;
            case 5:
                arr.deleteFromEnd();
                break;
            case 6:
                cout << "Enter position to delete element: ";
                cin >> pos;
                arr.deleteFromPosition(pos);
                break;
            case 7:
                cout << "Enter element to find index: ";
                cin >> a;
                cout << "Index of element: " << arr.findIndex(a) << endl;
                break;
            case 8:
                arr.display();
                break;
            case 9:
                arr.leftRotate();
                cout << "Array left rotated." << endl;
                break;
            case 10:
                arr.rightRotate();
                cout << "Array right rotated." << endl;
                break;
            case 11:
                cout << "Enter element to find its frequency: ";
                cin >> a;
                cout << "Frequency of element: " << arr.frequencyCount(a) << endl;
                break;
            case 12:
                cout << "Number of distinct elements: " << arr.countDistinct() << endl;
                break;
            case 0:
                cout << "Exiting...";
                break;
            default:
                cout << "Invalid choice. Please enter again." << endl;
        }
    } while (choice != 0);

    return 0;
}
