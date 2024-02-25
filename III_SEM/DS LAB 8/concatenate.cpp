#include<iostream>
using namespace std;
class node
{
    public:
   int data;
   node*next;
   node*prev;
   node(int k)
   {
     data=k;next=NULL;
     prev=NULL;
   }
};
class DLL
{
public:
   node*head,*tail;
   DLL()
   {
      head=NULL;
   }
   void create(int k);
   node*concatenate(node*head1,node*head2);
   void display();
};
void DLL::create(int k)
{
  node*temp=new node(k);
  node*t=head;
  if(head==NULL)
  {
    head=temp;
  }
  else
  {
     while(t->next!=NULL)
     {
        t=t->next;
     }
     t->next=temp;
     temp->prev=t;
     temp->next=NULL;
  }
}
node*DLL:: concatenate(node*head1,node*head2)
{
   node*t=head1;
   while(t->next!=NULL)
   {
      t=t->next;
   }
   t->next=head2;
   head2->prev=t;
   return head1;
}
void DLL::display()
{
  node*t=head;
  while(t!=NULL)
  {
    cout<<t->data<<" ";
    t=t->next;
  }
}
int main()
{
   DLL obj1,obj2;
   cout<<"enter the number of elements in list 1 and list2"<<endl;
   int n1,n2;
   cin>>n1>>n2;
    while(n1--)
    {
        int number;
        cin>>number;
        obj1.create(number);
    }
    while(n2--)
    {
        int number;
        cin>>number;
        obj2.create(number);
    }
    obj1.head=obj1.concatenate(obj1.head,obj2.head);
    obj1.display();
}
