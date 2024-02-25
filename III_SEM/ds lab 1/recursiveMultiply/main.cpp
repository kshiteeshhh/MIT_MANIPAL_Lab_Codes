#include<iostream>
using namespace std;
int recursiveMultiply(int a,int b)
{
   static int a1=a;
   static int b1=b;
   if(b==0||a==0)
   {
     return 0;
   }
   if(a==1){return b;}
   if(b==1){return a;}
   if(b>=a){return recursiveMultiply(a-1,b+b1);}
   else if(a>=b){return recursiveMultiply(a+a1,b-1);}
}
int main()
{
   cout<<"enter the numbers:"<<endl;
   int a,b;
   cin>>a>>b;
   cout<< recursiveMultiply(a,b)<<endl;
}

