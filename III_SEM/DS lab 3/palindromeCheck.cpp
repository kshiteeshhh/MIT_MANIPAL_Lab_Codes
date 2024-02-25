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
     int topfn();
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
int Stack::topfn()
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
  char a[100];
  cout<<"enter the string"<<endl;
  cin>>a;
  Stack ob;
  int n=strlen(a);
  for(int i=0;a[i]!=NULL;i++)
  {
     ob.push(a[i]);
  }
  int flag=0;
  for(int i=0;i<n;i++)
  {
     if(ob.topfn()!=a[i])
     {flag=1;break;}
     ob.pop();
  }
  if(flag==1)
  {
     cout<<a<<" is not a palindrome"<<endl;
  }
  else
  {cout<<a<<" is a palindrome"<<endl;
  }
}

