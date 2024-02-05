#include <iostream>>
#include "Matrix.h"
using namespace std;

int main()
{
    Matrix m1, m2, m3, m4, m5, m6, m7;
    int k; // constant
    cout << "Enter first matrix: ";
    cin >> m1;
    cout << "Enter Second matrix: ";
    cin >> m2;

    cout << "Matrix 1: " << endl;
    cout << m1;
    cout << "Matrix 2: " << endl;
    cout << m2;

    m3 = m1 + m2;
    cout << "Sum: " << endl;
    cout << m3;

    m4 = m1 - m2;
    cout << "Difference: " << endl;
    cout << m4;

    m5 = m1 * m2;
    cout << "The product is:" << endl;
    cout << m5;

    cout << "Enter a constant to multiply";
    cin >> k;

    cout << "Scalar multiplication of matrix 1:" << endl;
    m6 = m1 ^ k;
    cout << m6;
    
    m7 = m2 ^ k;
    cout << "Scalar multiplication of matrix 2:" << endl;
    cout << m7;
    return 0;
}
