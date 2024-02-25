#include<iostream>
using namespace std;
int swapfn(int *a,int *b)
{
   int temp=*b;
   *b=*a;
   *a=temp;
}
int * selectionSortasc(int a[],int n,int i)
{
   if(i==n){return a;}
      int minidx=i;
      for(int j=i+1;j<n;j++)
      {    if(a[j]<a[minidx])
            {minidx=j;}
      }
      swapfn(&a[minidx],&a[i]);
   selectionSortasc(a,n,i+1);
}
int * selectionSortdsc(int a[], int n,int i)
{
   if(i==n){return a;}
      int maxidx=i;
      for(int j=i+1;j<n;j++)
      {    if(a[j]>a[maxidx])
            {maxidx=j;}
      }
      swapfn(&a[maxidx],&a[i]);
   selectionSortdsc(a,n,i+1);
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
   if(k==1){selectionSortasc(a,n,0);}
   else {selectionSortdsc( a,n,0);}
   cout<<"array after sort"<<endl;
   for(int i=0;i<n;i++)
   {
      cout<<a[i]<<" ";
   }
   cout<<endl;
}
