#include<iostream>
using namespace std;
int swap(int *a,int *b)
{
   int temp=*b;
   *b=*a;
   *a=temp;
}
void selectionSortasc(int a[],int n)
{
   for(int i=0;i<n-1;i++)
   {
      int minidx=i;
      for(int j=i+1;j<n;j++)
      {    if(a[j]<a[minidx])
            {minidx=j;}
      }
      swap(&a[minidx],&a[i]);
   }
}
void selectionSortdsc(int a[], int n)
{
   for(int i=0;i<n-1;i++)
   {
      int maxidx=i;
      for(int j=i+1;j<n;j++)
      {
        if(a[j]>a[maxidx]){maxidx=j;}
      }
      swap(&a[maxidx],&a[i]);
   }
}

int main()
{

   cout<<"enter the size of the array"<<endl;
   int n;
   cin>>n;
   int a[n];
   cout<<"enter the elements"<<endl;
   for(int i=0;i<n;i++)
   {
      cin>>a[i];
   }
   cout<< "enter 1 for ascending and 2 for descending"<<endl;
   int k;cin>>k;
   if(k==1){selectionSortasc(a,n);}
   else {selectionSortdsc( a,n);}
   cout<<"array after sort"<<endl;
   for(int i=0;i<n;i++)
   {
      cout<<a[i]<<" ";
   }
   cout<<endl;
}
















































































































































































































































































































