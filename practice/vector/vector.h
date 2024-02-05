#include<iostream>
using namespace std;
class Vector
{
	public:
        float i, j, k;
      
		friend Vector operator +(Vector a,Vector b)
		{
			Vector sum;
			sum.i=a.i+b.i;
			sum.j=a.j+b.j;
			sum.k=a.k+b.k;
			return sum;
		}
		friend Vector operator ^(Vector a,Vector b)
		{
			Vector dot;
			dot.i=a.i*b.i;
			dot.j=a.j*b.j;
			dot.k=a.k*b.k;
			cout<<"DOT PRODUCT: ";
			cout<<dot.i+dot.j+dot.k;
			cout<<endl;
			return dot;		
		}
		friend Vector operator *(Vector a,Vector b)
		{
			Vector cross;
			cross.i=a.j*b.k-a.k*b.j;
			cross.k=a.i*b.k-a.k*b.i;
			cross.k=a.i*b.j-a.j*b.i;
			return cross;
		}

          friend istream& operator >> (istream & is,Vector &v)
		{
			cout<<"Enter x coordinate:";
			is>>v.i;
			cout<<"Enter y coordinate:";
			is>>v.j;
			cout<<"Enter z coordinate:";
			is>>v.k;
			return is;
		}

        
		friend ostream & operator << (ostream & os,Vector & v)
		{
			os<<"("<<v.i<<")i+"<<"("<<v.j<<")j+"<<"("<<v.k<<")k"<<endl;
			return os;
		}
