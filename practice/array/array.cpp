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
	int index=-1;
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
//template <class T>
//T Array<T>::find_min(T,int,int)
//{
//	int min=LB;
//	for(int j=LB+1;j<UB;j++)
//	{
//		if (A[j]<A[min])
//		{
//			min=j;
//		}
//	}
//	return min;
//}
template<class T>
void Array<T>::swap(int p,int q)
{
	T t=A[p];
	A[p]=A[q];
	A[q]=t;
}
template<class T>
void Array<T>::selection_sort()
{
	for(int i=LB;i<UB;i++)
	{
		int min=i;
		for(int j=i+1;j<=UB;j++)
		{
			if (A[j]<A[min])
			{
				min=j;
			}
		}
		if (min!=i)
		{
			swap(i,min);
		}
	}
}
template<class T>
T Array<T>::binary_search(T key)
{
	int p=LB;
	int q=UB;
	while (p<=q)
	{
		int mid=(p+q)/2;
		if (A[mid]>key)
		{
			q=mid-1;
		}
		else if(A[mid]<key)
		{
			p=mid+1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}
template<class T>
void Array<T>::bubble_sort()
{
	for(int i=LB;i<UB;i++)
	{
		for(int j=LB;j<UB+LB-i;j++)
		{
			if (A[j]>A[j+1])
			{
				swap(j,j+1);
			}
		}
	}
}
template <class T>
void Array<T>::insertion_sort(){
	int i;
	i=LB+1;
	while(i<=UB){
		T key=A[i];
		int j;
		j=i-1;
		while(j>=LB and A[j]>key){
			A[j+1]=A[j];
			j=j-1;
		}
		A[j+1]=key;
		i=i+1;
	}
}
template<class T>
int Array<T>::partition(int LB,int UB)
{
	int j=LB-1;
	T pivot=A[UB];
	int i=LB;
	while (i<=UB-1)
	{
		if (A[i]<pivot)
		{
			j=j+1;
			swap(i,j);
		}
		i+=1;	
	}
	swap(j+1,UB);
	return j+1;
}
template<class T>
void Array<T>::quick_sort(int LB, int UB)
{
	if(LB<UB)
	{
	int p=partition(LB,UB);
	quick_sort(LB,p-1);
	quick_sort(p+1,UB);	
	}
}
/*template<class T>
void Array<T>::merge(int LB,int UB,int key)
{
	int p=UB-LB+1;
	int q=key-LB;
	int A[p],B[q];
	for(int i=)
}*/
template<class T>
void Array<T>::clockrotate(int pos)
{
	cout<<"CLOCKWISE ROTATION: \n";
	for(int i=0;i<pos;i++)
	{
		T temp=A[UB];
		for(int j=UB;j>0;j--)
		{
			A[j]=A[j-1];
		}
		A[LB]=temp;
	}
}
template <class T>
void Array<T>::antirotate(int pos)
{
	cout<<"COUNTER CLOCKWISE: \n";
	for(int i=LB;i<=pos;i++)
	{
		T temp=A[LB];
		for(int j=LB;j<=UB;j++)
		{
			A[j]=A[j+1];
		}
		A[UB]=temp;
	}
}
template<class T>
void Array<T>::distinct()
{
	
	for(int i=0;i<UB;i++)
	{
		int count=0;
		for(int j=0;j<UB;j++)
		{
			if(A[i]==A[j])
			{
				count+=1;
			}
	    }
		if(count==1)
		{
		  cout<<A[i]<<" ";	
		}
		
		
	}
}
template<class T>
void Array<T>::frequency()
{
	int i;
	int count=1;
	quick_sort(LB,UB);
	cout<<"Element "<<"	    "<<" Frequency "<<endl;
	for(i=LB;i<=UB;i++)
	{
	  	if(A[i]==A[i+1])
	  	{
	  	  count+=1;	
		}	
	else
	{
		cout<<A[i]<<"			"<<count<<endl;
		count=1;
	}
}
}


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
