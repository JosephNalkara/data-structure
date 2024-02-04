#include"Array.h"
template <class T>
Array<T>::Array()
{
	LB=1;
	UB=0;
}
template<class T>
Array<T>::Array(int LB,int UB,T x[])
{	
}
template<class T>
void Array<T>::insert_at_end(T key)
{
	UB=UB+1;
	A[UB]=key;
}
int k;
template<class T>
void Array<T>::insert_at_beg(T key)
{
	UB+=1;
	k=UB-1;
	while (k>=LB)
	{
		A[k+1]=A[k];
		k-=1;
	}
	A[LB]=key;
}
template<class T>
void Array<T>::insert_at_pos(T key,int pos)
{
	
	UB+=1;
	k=UB-1;
	while (k>=pos)
	{
		A[k+1]=A[k];
		k-=1;
	}
	A[pos]=key;
}
template<class T>
void Array<T>::delete_at_beg()
{
	LB+=1;
	
}
template<class T>
void Array<T>::delete_at_end()
{
	UB-=1;
	
}
template<class T>
void Array<T>::delete_at_index(int pos)
{
	if (LB<=pos and UB>=pos)
	{
		k=pos+1;
		while (k<=UB)
		{
		  A[k-1]=A[k];
	   	  k+=1;	
		}
		UB-=1;
	}
	else
	{
		cout<<"OUT OF BOUND";
	}
	
}
template<class T>
T Array<T>::linear_search(T key)
{
	int index=NULL;
	int i=LB;
	while (i<=UB)
	{
		if (A[i]==key)
		{
			index=i;
			break;
		}
		i=i+1;
	}
	return index;
}
template <class T>
T Array<T>::find_min(T,int,int)
{
	int min=LB;
	for(int j=LB+1;j<UB;j++)
	{
		if (A[j]<A[min])
		{
			min=j;
		}
	}
	return min;
}
template<class T>
void Array<T>::swap(T,int p,int q)
{
	T t=A[p];
	A[p]=A[q];
	A[q]=t;
}
template<class T>
void Array<T>::selection_sort()
{
	for(int i=LB;i<UB-1;i++)
	{
		T min=find_min(A,i,UB);
		if (min!=i)
		{
			swap(A,i,min);
		}
	}
}
//template<class T>
//T Array<T>::binary_search(T key)
//{
//	int p=LB;
//	int q=UB;
//	while (p<=q)
//	{
//		int m=(p+q)/2;
//		if (A[m]>key)
//		{
//			q=m-1;
//		}
//		else if(A[m]<key)
//		{
//			p=m+1;
//		}
//		else
//		{
//			return m;
//		}
//	}
//	return NULL;
//}

template <class U>
ostream & operator <<(ostream & os, Array<U> M)
{
	int i;
	os<<endl;
	for(i=M.LB;i<=M.UB;i++)
	{
		os<<M.A[i]<<" ";
	}
	os<<endl;
	return os;
}
