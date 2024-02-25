#include<iostream>
using namespace std;
void InsertionSortAsc(int a[],int n)
{
   for(int i=1;i<n;i++)
   {
      int j=i-1; int key=a[i];
      while(j>=0 && a[j]>key)
      {
         a[j+1]=a[j];
         j--;
      }
      a[j+1]=key;
   }
}
void InsertionSortDsc(int a[],int n)
{
   for(int i=1;i<n;i++)
   {
      int j=i-1; int key=a[i];
      while(j>=0 && a[j]<key)
      {
         a[j+1]=a[j];
         j--;
      }
      a[j+1]=key;
   }
}
int main()
{
   cout<<"enter the size of array"<<endl;
   int n;
   cin>>n;
   int a[n];
   cout<<"enter the elements"<<'\n';
   for(int i=0;i<n;i++)
   {
     cin>>a[i];
   }
   cout<<"enter 1 for ascending and 2 for descending"<<endl;
   int k; cin>>k;
   if(k==1)
   {InsertionSortAsc(a,n);}
   else
   {
     InsertionSortDsc(a,n);
   }
   cout<<"elements after sorting:"<<'\n';
   for(int i=0;i<n;i++)
   {
     cout<<a[i]<<" ";
   }
}

