#include<iostream>
using namespace std;
int BinarySearchRec(int a[],int k,int l,int h)
{
   int mid=(l+h)/2;
   if(l>h){return -1;}
   if(a[mid]==k){return mid;}
   else if(k<a[mid])return BinarySearchRec(a,k,l,mid-1);
   else{return BinarySearchRec(a,k,mid+1,h);}
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
   int idx=BinarySearchRec(a,k,0,n-1);
   if(idx==-1){cout<<"number not found"<<endl;}
   else
   {cout<<"element is found at index:"<<idx<<endl;}
}
