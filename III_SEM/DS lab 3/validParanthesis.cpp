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
  char a[100];
  cout<<"enter the expression"<<endl;
  cin>>a;
  int n=strlen(a);
  Stack ob;int flag=0;
  for(int i=0;a[i]!='\0';i++)
  {
     if(a[i]=='('||a[i]=='{'||a[i]=='[')
     {ob.push(a[i]);}
     else if(ob.top!=-1)
     {
        if(ob.topfn()=='['&& a[i]==']'){ob.pop();}
        else if(ob.topfn()=='{'&& a[i]=='}'){ob.pop();}
        else if(ob.topfn()=='('&& a[i]==')'){ob.pop();}
     }
     else if(ob.top==-1 && a[i]!='['&& a[i]!='('&& a[i]!='{')
     {
         flag=1;
         break;
     }
  }
  if(ob.top==-1 && flag==0){cout<<"it is a valid paranthesis"<<endl;}
  else {cout<<"it is not a valid paranthesis"<<endl;}
}

