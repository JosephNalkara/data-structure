#include "LinkedList.cpp"

int main() {
    cout<<"Creating the first linked list"<<endl;
    LinkedList<int> myLinkedList{};
    myLinkedList.create();
    myLinkedList.display();

    int keyFront;
    cout << "Enter the data to be inserted at the front: ";
    cin >> keyFront;
    myLinkedList.insertAtBeginning(keyFront);
    myLinkedList.display();
    cout << endl;

    int keyEnd;
    cout << "Enter the data to be inserted at the end: ";
    cin >> keyEnd;
    myLinkedList.insertAtEnd(keyEnd);
    myLinkedList.display();
    cout << endl;

    int keyAfter, itemAfter;
    cout << "Enter the data after which the item is to be inserted: ";
    cin >> keyAfter;
    cout << endl;
    cout << "Enter the data to be inserted after " << keyAfter << ": ";
    cin >> itemAfter;
    cout << endl;
    myLinkedList.insertAfterKey(keyAfter, itemAfter);
    myLinkedList.display();
    cout << endl;

    int keyBefore, itemBefore;
    cout << "Enter the data before which the item is to be inserted: ";
    cin >> keyBefore;
    cout << endl;
    cout << "Enter the data to be inserted before " << keyBefore << ": ";
    cin >> itemBefore;
    cout << endl;
    myLinkedList.insertBeforeKey(keyBefore, itemBefore);
    myLinkedList.display();
    cout << endl;

    cout << "After deletion from the front:" << endl;
    myLinkedList.deleteAtBeginning();
    myLinkedList.display();
    cout << endl;

    cout << "After deletion from the end:" << endl;
    myLinkedList.deleteAtEnd();
    myLinkedList.display();
    cout << endl;

    int keyToDelete;
    cout << "Enter the key to delete: ";
    cin >> keyToDelete;
    cout << endl;
    myLinkedList.deleteAtKey(keyToDelete);
    myLinkedList.display();
    cout << endl;

    /*cout << "After Reverse Traversal:" << endl;
    myLinkedList.reverseTraversal();
    cout << endl;*/

    cout<<"Creating second linked list for concatenate to first linked list"<<endl;
    LinkedList<int> myLinkedList2{};
    cout << "Enter the data for new linked list: ";
    myLinkedList2.create();
    cout << endl;
    myLinkedList.concatenation(myLinkedList2);
    cout << "After concatenation:" << endl;
    myLinkedList.display();
    cout << endl;

    int keyToSearch;
    cout << "Enter the data to search: ";
    cin >> keyToSearch;
    cout << endl;
    myLinkedList.search(keyToSearch);
    cout << endl;

    cout << "After reversing:" << endl;
    myLinkedList.reverse();
    myLinkedList.display();
    cout << endl;

    cout << "After sorting:" << endl;
    myLinkedList.sorting();
    myLinkedList.display();
    cout << endl;

    return 0;
}
