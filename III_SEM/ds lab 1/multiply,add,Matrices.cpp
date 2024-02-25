#include<iostream>
using namespace std;
void multiply(int a[100][100],int b[100][100],int c[100][100],int m,int n)
{
   for(int i=0;i<m;i++)
   {
      for(int j=0;j<n;j++)
      {
        int k=0; int sum=0;
        while(k<n)
        {
           sum+=a[i][k]*b[k][j];
           k++;
        }
         c[i][j]=sum;
      }
   }
}
bool magicsquare(int a[][100],int n)
{
    int sum1=0; int sum=0;
    for(int i=0;i<n;i++)
    {
        sum1+=a[0][i];
    }
    for(int i=0;i<n;i++)
    {
        sum=0;
        for(int j=0;j<n;j++)
        {
           sum+=a[i][j];
        }
        if(sum!=sum1){return false;}
    }
    for(int i=0;i<n;i++)
    {
        sum=0;
        for(int j=0;j<n;j++)
        {
           sum+=a[j][i];
        }
        if(sum!=sum1){return false;}
    }
    sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=a[i][i];
    }
    if(sum!=sum1){return false;}
    sum=0;
     for(int i=0;i<n;i++)
    {
        sum+=a[n-1-i][n-1-i];
    }
    if(sum!=sum1){return false;}
    return true;

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
    if(m!=q){cout<< "multiplication not possible"<<endl;}
    else
    {
            multiply(a,b,c,m,n);
    }
    cout<< endl;
    if(magicsquare(a,n))
    {
        cout<< "yes"<<endl;
    }
    else
    {
        cout<<"no"<<endl;
    }
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
