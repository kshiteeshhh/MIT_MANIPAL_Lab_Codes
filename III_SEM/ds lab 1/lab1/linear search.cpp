#include<iostream>
using namespace std;
int LinearSearch(int a[],int n,int k)
{
   for(int i=0;i<n;i++)
   {
      if(a[i]==k){return i;}
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
   int idx=LinearSearch(a,n,k);
   if(idx==-1){cout<<"number not found"<<endl;}
   else
   {cout<<"element is found at index:"<<idx<<endl;}
}
