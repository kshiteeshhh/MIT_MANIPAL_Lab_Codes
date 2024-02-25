#include<iostream>
using namespace std;
int BinarySearch(int a[],int n,int k)
{
   int l=0,h=n-1,mid;
   while(l<=h)
   {
      mid=(l+h)/2;
      if(a[mid]==k){return mid;}
      else if(a[mid]>k){h=mid-1;}
      else {l=mid+1;}
   }
   return -1;
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
   cout<<"enter the number to be searched"<<endl;
   int k;cin>>k;
   int idx=BinarySearch(a,n,k);
   if(idx==-1){cout<<"number not found"<<endl;}
   else
   {cout<<"element is found at index:"<<idx<<endl;}
}
