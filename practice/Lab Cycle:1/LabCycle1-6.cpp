#include "Labcycle1-6.h"

template<typename T>
Polynomial<T>::Polynomial() : head(nullptr) {}

template<typename T>
Polynomial<T>::~Polynomial() {
    Node<T>* temp;
    while (head != nullptr) {
        temp = head;
        head = head->next;
        delete temp;
    }
}

template<typename T>
void Polynomial<T>::insertTerm(T coefficient, int exponent) {
    if (coefficient == 0)
        return;

    Node<T>* newNode = new Node<T>(coefficient, exponent);

    if (head == nullptr || exponent > head->exponent) {
        newNode->next = head;
        head = newNode;
    } else {
        Node<T>* current = head;
        while (current->next != nullptr && current->next->exponent >= exponent) {
            current = current->next;
        }
        newNode->next = current->next;
        current->next = newNode;
    }
}

template<typename T>
Polynomial<T> Polynomial<T>::add(const Polynomial<T>& other) const {
    Polynomial<T> result;
    Node<T>* current1 = head;
    Node<T>* current2 = other.head;

    while (current1 != nullptr && current2 != nullptr) {
        if (current1->exponent > current2->exponent) {
            result.insertTerm(current1->coefficient, current1->exponent);
            current1 = current1->next;
        } else if (current1->exponent < current2->exponent) {
            result.insertTerm(current2->coefficient, current2->exponent);
            current2 = current2->next;
        } else {
            T sum = current1->coefficient + current2->coefficient;
            result.insertTerm(sum, current1->exponent);
            current1 = current1->next;
            current2 = current2->next;
        }
    }

    while (current1 != nullptr) {
        result.insertTerm(current1->coefficient, current1->exponent);
        current1 = current1->next;
    }

    while (current2 != nullptr) {
        result.insertTerm(current2->coefficient, current2->exponent);
        current2 = current2->next;
    }

    return result;
}

template<typename T>
Polynomial<T> Polynomial<T>::multiply(const Polynomial<T>& other) const {
    Polynomial<T> result;
    Node<T>* current1 = head;

    while (current1 != nullptr) {
        Node<T>* current2 = other.head;
        while (current2 != nullptr) {
            T coeff = current1->coefficient * current2->coefficient;
            int exp = current1->exponent + current2->exponent;
            result.insertTerm(coeff, exp);
            current2 = current2->next;
        }
        current1 = current1->next;
    }

    return result;
}

template<typename T>
void Polynomial<T>::display() const {
    Node<T>* current = head;
    while (current != nullptr) {
        std::cout << current->coefficient << "x^" << current->exponent;
        current = current->next;
        if (current != nullptr)
            std::cout << " + ";
    }
    std::cout << std::endl;
}
