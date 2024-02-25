#include<iostream>
using namespace std;
#include <cstring>
class Stack
{
public:
     int top;char s[100];
     Stack()
    { top = -1;}
     void push(int n);
     void pop();
     void display();
     char topfn();
};
void Stack:: push(int n)
{
   if(top==99)
   {
      cout<<"stack overflow"<<endl;
      return;
   }
   s[++top]=n;
}
void Stack::pop()
{
   if(top==-1)
   {
      cout<<"stack is empty"<<endl;
      return;
   }
   top--;
}
char Stack::topfn()
{
   return s[top];
   top--;
}
void Stack::display()
{
   if(top==-1)
   {
      cout<<"stack is empty"<<endl;
      return;
   }
   cout<<"elements of the stack"<<endl;
   for(int i=0;i<=top;i++)
   {
      cout<<s[i]<<" ";
   }
   cout<<endl;
}

int main()
{
  int num;
  cout<<"enter the num"<<endl;
  cin>>num;
  Stack ob;
  cout<<"enter the base to be converted to"<<endl;
  int b;cin>>b;
  while(num>=1)
  {
     int rem=num%b;
     if(rem>=0&&rem<=9)
     {
        int k=rem+48;
        ob.push(k);
     }
     else
     {
        int k=rem+55;
        ob.push(k);
     }
     num=num/b;
  }
  cout<<"number in given base is:";
  while(ob.top!=-1)
  {
     cout<<ob.topfn();
     ob.pop();
  }
}

