#include "LabCycle1-6.cpp"

int main() {
    Polynomial<int> poly1, poly2;

    poly1.insertTerm(4, 3);
    poly1.insertTerm(3, 2);
    poly1.insertTerm(5, 0);

    poly2.insertTerm(2, 2);
    poly2.insertTerm(1, 1);
    poly2.insertTerm(6, 0);

    cout << "First Polynomial: ";
    poly1.display();
    cout << "Second Polynomial: ";
    poly2.display();

    Polynomial<int> sum = poly1.add(poly2);
    cout << "Sum of Polynomials: ";
    sum.display();

    Polynomial<int> product = poly1.multiply(poly2);
    cout << "Product of Polynomials: ";
    product.display();

    return 0;
}
