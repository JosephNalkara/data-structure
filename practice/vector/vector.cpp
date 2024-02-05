#include "Vector.h"
#include <iostream>
using namespace std;

int main() {
    Vector v1, v2, v3, v4,v5;
    cin >> v1;
    cin >> v2;
    cout << "The Vectors:  " << endl;
    cout << v1;
    cout << v2;
    cout << endl;

    v3 = v1 + v2;
    cout << "Sum: " << v3 << endl;
    cout << endl;

    v4 = v1 ^ v2;
    cout << "Dot product of these vectors: " << v4 << endl;
    cout << endl;

    v5 = v1 * v2;
    cout << "Cross product of these vectors: " << v5 << endl;

    return 0;
