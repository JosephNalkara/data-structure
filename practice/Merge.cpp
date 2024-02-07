#include<iostream>
using namespace std;
void merge(int a[],int b[],int c[])
{
int i=0,j=0,g=0,z=0;
while(g<10)
{
if(a[i]<=b[j])
{
c[g]=a[i];
i++;
}
else
{
c[g]=b[j];
j++;
}
g++;
}
for(z=0;z<10;z++)
{
cout<<c[z]<<endl;
}}
int main()
{
    int a[]={1,3,5,7,9};
    int b[]={2,4,6,8,10};
    int c[10];
    merge(a,b,c);
    return 0;
}
