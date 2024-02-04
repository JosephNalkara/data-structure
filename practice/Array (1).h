#include<iostream>
#include<ostream>
using namespace std;
template <class T>
class Array
{
	int LB,UB;
	T A[100];
	public:
		Array();
		Array(int,int,T[]);
		void insert_at_end(T);
		void insert_at_beg(T);
		void insert_at_pos(T,int);
		void delete_at_beg();
		void delete_at_end();
		void delete_at_index(int);
		T linear_search(T);
		T find_min(T,int,int);
		void swap(T,int,int);
		void selection_sort();
		T binary_search(T);
		template<class U>
		friend ostream & operator <<(ostream &,Array <U>);
};

