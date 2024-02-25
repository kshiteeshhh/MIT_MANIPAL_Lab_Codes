#include<iostream>
using namespace std;
int swap(int *a,int *b)
{
   int temp=*b;
   *b=*a;
   *a=temp;
}
void BubbleSortasc(int a[],int n)
{
   for(int i=0;i<n-1;i++)
   {
      for(int j=0;j<n-1-i;j++)
      {
        if(a[j]>a[j+1])
        {
           swap(&a[j],&a[j+1]);
        }
      }
   }
}
void BubbleSortdsc(int a[], int n)
{
   for(int i=0;i<n-1;i++)
   {
      for(int j=0;j<n-1-i;j++)
      {
        if(a[j]<a[j+1])
        {
           swap(&a[j],&a[j+1]);
        }
      }
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
   if(k==1){BubbleSortasc(a,n);}
   else {BubbleSortdsc( a,n);}
   cout<<"array after sort"<<endl;
   for(int i=0;i<n;i++)
   {
      cout<<a[i]<<" ";
   }
   cout<<endl;
}
