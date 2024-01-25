#include <iostream>
using namespace std;  

class vector3D {
    public:
    double x, y, z;
    
    vector3D(){
        x=0;
        y=0;
        z=0;
    }

    vector3D(double x, double y, double z){
        x=x;
        y=y;
        z=z; }


    vector3D operator+(const vector3D& ve) {
        return vector3D(x + ve.x, y + ve.y, z + ve.z);
    }

    vector3D operator-(const vector3D& ve ){
        return vector3D(x - ve.x, y - ve.y, z - ve.z);
    }

    vector3D operator*(double scalar){
        return vector3D(x * scalar, y * scalar, z * scalar);
    }

    double dot(const vector3D& ve){
        return (x * ve.x + y * ve.y + z * ve.z);
    }

    vector3D cross(const vector3D& ve){
        return vector3D(y * ve.z - z * ve.y, z * ve.x - x * ve.z, x * ve.y - y * ve.x);
    }

    void display(){
        cout << "(" << x << ", " << y << ", " << z << ")" << endl;
    }
};

int main() {
    vector3D v1(2.0, 3.0, 4.0);
    vector3D v2(1.0, 2.0, 3.0);

 
    vector3D result_add = v1 + v2;
    cout << "Vector Addition: ";
    result_add.display();

    vector3D result_sub = v1 - v2;
    cout << "Vector Subtraction: ";
    result_sub.display();

    double scalar = 2.0;
    vector3D result_scalar_mult = v1 * scalar;
    cout << "Scalar Multiplication: ";
    result_scalar_mult.display();

    double dot_product = v1.dot(v2);
    cout << "Dot Product: " << dot_product << endl;

    vector3D result_cross = v1.cross(v2);
    cout << "Cross Product: ";
    result_cross.display();

}
