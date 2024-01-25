#include<iostream>
using namespace std;

class complex{
    public:
    float real;
    float imag;

    complex(){
        real=0;
        imag=0;
    }

    complex(float r, float i){
        real = r;
        imag = i;
    }

    complex operator +(complex& co){
        complex c;
        c.real=this-> real +co.real;
        c.imag=this-> imag + co.imag;
        return c;
    }

    complex operator *(complex& co){
        complex c;
        c.real=(this-> real*co.real)-(this-> imag*co.imag);
        c.imag=(this-> imag*co.imag) + (this-> real*co.real);
        return c;
    }

     void operator --(){
        imag*=(-1);
    }

    void display(){
        cout<<real<<" + ("<<imag<<") i "<<endl;
    }

};

int main(){
    complex c1(2.5, 3.0);
    complex c2(2.5, 2.0);
    complex c3=c1+c2;
    complex c4=c1*c2;
    --c2;
    c2.display();
    c3.display();
    c4.display();
}
