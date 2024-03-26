#include "LabCycle1-2.cpp" 

int main() {
    Array<int> arr;

    char choice;
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
        cout << "9. Linear Search\n";
        cout << "a. Binary Search\n";
        cout << "b. Bubble Sort\n";
        cout << "c. Insertion Sort\n";
        cout << "d. Selection Sort\n";
        cout << "e. Merge Sort\n";
        cout << "f. Quick Sort\n";
        cout << "g. Quit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case '1':
                cout << "Enter element to insert at beginning: ";
                cin >> a;
                arr.insertAtBeginning(a);
                break;
            case '2':
                cout << "Enter element to insert at end: ";
                cin >> a;
                arr.insertAtEnd(a);
                break;
            case '3':
                cout << "Enter position to insert element: ";
                cin >> pos;
                cout << "Enter element to insert: ";
                cin >> a;
                arr.insertAtPosition(pos, a);
                break;
            case '4':
                arr.deleteFromBeginning();
                break;
            case '5':
                arr.deleteFromEnd();
                break;
            case '6':
                cout << "Enter position to delete element: ";
                cin >> pos;
                arr.deleteFromPosition(pos);
                break;
            case '7':
                cout << "Enter element to find index: ";
                cin >> a;
                cout << "Index of element: " << arr.findIndex(a) << endl;
                break;
            case '8':
                arr.display();
                break;
            case '9':
                cout << "Enter element to search: ";
                cin >> a;
                cout << "Index of element (linear search): " << arr.linearSearch(a) << endl;
                break;
            case 'a':
                cout << "Enter element to search: ";
                cin >> a;
                cout << "Index of element (binary search): " << arr.binarySearch(a) << endl;
                break;
            case 'b':
                arr.bubbleSort();
                break;
            case 'c':
                arr.insertionSort();
                break;
            case 'd':
                arr.selectionSort();
                break;
            case 'e':
                arr.mergeSort(0, arr.getSize() - 1);
                break;
            case 'f':
                arr.quickSort(0, arr.getSize() - 1);
                break;
            case 'g':
                cout << "Exiting...";
                break;
            default:
                cout << "Invalid choice. Please enter again." << endl;

        }
    } while (choice != 16);

    return 0;
}