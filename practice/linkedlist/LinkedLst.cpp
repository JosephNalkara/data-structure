#include"LinkedList.h"

template<class T>

Node<T>::Node(T data) {
    this->data = data;
    this->link = nullptr;
}

template<class T>
T Node<T>::get_data() {
    return data;
}

template<class T>
void Node<T>::set_data(T data) {
    this->data = data;
}

template<class T>
void Node<T>::set_link(Node *link) {
    this->link = link;
}

template<class T>
Node<T> *Node<T>::get_link() {
    return link;
}

template<class T>
void LinkedList<T>::create() {
    string choice;
    T x;
    Node<T> *current = nullptr;
    do {
        cout << "Enter the data: ";
        cin >> x;
        cout << endl;
        Node<T> *node = new Node<T>(x);
        if (head == nullptr) {
            head = node;
            current = head;
        } else {
            current->set_link(node);
            current = node;
        }
        cout << "Do you want to enter more values? (y/n): ";
        cin >> choice;
        cout << endl;
    } while (choice == "y");
}

template<class T>
void LinkedList<T>::display() {
    Node<T> *t = head;
    while (t != NULL) {
        cout << t->get_data() << " ";
        t = t->get_link();
    }
}

template<class T>
void LinkedList<T>::insertAtBeginning(T key) {
    Node<T> *node = new Node<T>(key);
    node->set_data(key);
    node->set_link(head);
    head = node;
}

template<class T>
void LinkedList<T>::insertAtEnd(T key) {
    Node<T> *q = head;
    while (q->get_link() != NULL) {
        q = q->get_link();
    }
    Node<T> *node = new Node<T>(key);
    node->set_data(key);
    q->set_link(node);
}

template<class T>
void LinkedList<T>::insertAfterKey(T key, T value) {
    Node<T> *p = head;
    while (p->get_link() != NULL && p->get_data() != key) {
        p = p->get_link();
    }
    if (p->get_link() == NULL) {
        cout << "Key is not available" << endl;
        return;
    } else {
        Node<T> *q = p->get_link();
        Node<T> *node = new Node<T>(value);
        node->set_data(value);
        node->set_link(q);
        p->set_link(node);
    }
}

template<class T>
void LinkedList<T>::insertBeforeKey(T key, T item) {
    Node<T> *p = head;
    Node<T> *q = p->get_link();
    while (q->get_link() != NULL && q->get_data() != key) {
        p = q;
        q = q->get_link();
    }
    if (q->get_link() == NULL) {
        cout << "Key is not in this link list" << endl;
        return;
    } else {
        Node<T> *node = new Node<T>(item);
        node->set_link(q);
        p->set_link(node);
    }
}

template<class T>
void LinkedList<T>::deleteAtBeginning() {
    Node<T> *temp = head;
    head = head->get_link();
    delete (temp);
}

template<class T>
void LinkedList<T>::deleteAtEnd() {
    Node<T> *p = head;
    Node<T> *q = p->get_link();
    while (q->get_link() != NULL) {
        p = q;
        q = q->get_link();
    }
    p->set_link(NULL);
    delete (q);
}

template<class T>
void LinkedList<T>::deleteAtKey(T key) {
    Node<T> *p = head;
    Node<T> *q = p->get_link();

    if (head->get_data() == key) {
        head = head->get_link();
        delete p;
        return;
    }

    while (q != NULL && q->get_data() != key) {
        p = q;
        q = q->get_link();
    }

    if (q == NULL) {
        cout << "Key not available" << endl;
        return;
    }

    p->set_link(q->get_link());
    delete q;
}

template<class T>
void LinkedList<T>::search(T key) {
    Node<T> *p = head;
    while (p != NULL && p->get_data() != key) {
        p = p->get_link();
    }

    if (p == NULL) {
        cout << "Element not found " << endl;
    } else {
        cout << "Element found " << endl;
    }
}

template<class T>
void LinkedList<T>::reverse() {
    Node<T> *q = head;
    Node<T> *p = NULL;
    Node<T> *r = NULL;
    while (q != NULL) {
        r = q->get_link();
        q->set_link(p);
        p = q;
        q = r;
    }
    head = p;
}

template<class T>
void reverseTraversal(Node<T> *node) {
    if (node == NULL) {
        return;
    }
    reverseTraversal(node->get_link());
    cout << node->get_data() << " ";
}

template<class T>
void LinkedList<T>::sorting() {
    Node<T> *p = head;
    while (p != NULL) {
        Node<T> *q = p->get_link();
        while (q != NULL) {
            if (p->get_data() > q->get_data()) {
                T temp = p->get_data();
                p->set_data(q->get_data());
                q->set_data(temp);
            }
            q = q->get_link();
        }
        p = p->get_link();
    }

}

template<class T>
void LinkedList<T>::concatenation(LinkedList<T> &l) {
    Node<T> *p = head;
    if (p == NULL) {
        head = l.head;
    } else {
        while (p->get_link() != NULL) {
            p = p->get_link();
        }
        p->set_link(l.head);
    }
}
