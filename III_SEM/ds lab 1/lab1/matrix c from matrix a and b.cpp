#include<iostream>
using namespace std;
void fn(int a[100][100],int b[100][100],int c[100][100],int m,int n)
{
   for(int i=0;i<m;i++)
   {
      for(int j=0;j<n;j++)
      {
         c[i][j]=(a[i][j]>b[i][j])?a[i][j]:b[i][j];
      }
   }
}
int main()
{
   int a[100][100],b[100][100];
   cout<<"enter the number of rows and columns for matrix 1:"<<endl;
   int m,n;
   cin>>m>>n;
   cout<<"enter the number of rows and columns for matrix 2:"<<endl;
   int p,q;
   cin>>p>>q;
   if(m!=p||n!=q)
   {cout<<"invalid matrix sizes";
    return 0;}
    int c[100][100];
    cout<< "enter the matrix a"<<endl;
    for(int i=0;i<m;i++)
    {
       for(int j=0;j<n;j++)
       {
          cin>>a[i][j];
       }
    }
    cout<< "enter the matrix b"<<endl;
    for(int i=0;i<p;i++)
    {
       for(int j=0;j<q;j++)
       {
          cin>>b[i][j];
       }
    }
    fn(a,b,c,m,n);
    cout<< "matrix c is:"<<endl;
    for(int i=0;i<p;i++)
    {
       for(int j=0;j<q;j++)
       {
          cout<<c[i][j]<<" ";
       }
       cout<<endl;
    }

}
