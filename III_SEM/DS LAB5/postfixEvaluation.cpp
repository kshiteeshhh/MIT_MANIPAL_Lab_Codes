#include<iostream>
using namespace std;
#include <cstring>
class Stk
{
public:
     int top;int s[100];
     Stk()
    { top = -1;}
     void push(int n);
     void pop();
     void display();
     int topfn();
};
void Stk:: push(int n)
{
   if(top==99)
   {
      cout<<"stack overflow"<<endl;
      return;
   }
   s[++top]=n;
}
void Stk::pop()
{
   if(top==-1)
   {
      cout<<"stack is empty"<<endl;
      return;
   }
   top--;
}
int Stk::topfn()
{
   return s[top--];
}
void Stk::display()
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
   char exp[100];
   cout<<"enter the expression"<<endl;
   cin>>exp;
   Stk obj;
   for(int i=0;exp[i]!='\0';i++)
   {
      switch(exp[i])
      {
         case '+': {int c2=obj.topfn();
                    int c1=obj.topfn();
                    obj.push((c1+c2));
                     break;}
          case '-':{ int c2=obj.topfn();
                   int c1=obj.topfn();
                   obj.push(c1-c2);
                   break;}
         case '*':{ int c2=obj.topfn();
                   int c1=obj.topfn();
                   obj.push(c2*c1);
                   break;  }
         case '/': {int c2=obj.topfn();
                   int c1=obj.topfn();
                   obj.push(c1/c2);
                   break; }
        default:   obj.push(exp[i]-'0');
                   break;
      }
   }
   cout<< obj.topfn()<<endl;
}
