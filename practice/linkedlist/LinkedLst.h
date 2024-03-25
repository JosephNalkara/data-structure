#include <iostream>
#include<ostream>

using namespace std;

template<class T>

class Node {
    T data;
    Node *link;
public:
    Node(T);

    T get_data();

    void set_data(T);

    void set_link(Node *link);

    Node *get_link();
};

template<class T>
class LinkedList {
    Node<T> *head;
public:
    void create();

    void display();

    void insertAtBeginning(T);

    void insertAtEnd(T);

    void insertAfterKey(T, T);

    void insertBeforeKey(T, T);

    void deleteAtBeginning();

    void deleteAtEnd();

    void deleteAtKey(T);

    void search(T);

    void reverse();

    void reverseTraversal(Node<T> *node);

    void sorting();

    void concatenation(LinkedList &l);

};
