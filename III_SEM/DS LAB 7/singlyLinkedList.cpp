#include<iostream>
using namespace std;
class node
{
    public:
   int data;
   node*next;
   node(int k)
   {data=k;next=NULL;}
};
class SLL
{
public:
   node*head,*tail;
   SLL()
   {
      head=NULL;
   }
   void create(int k);
   void InsBefore(int l,int k);
   void InsAfter(int l,int k);
   void deletefn(int k);
   node *reversefn(node*head);
   node*deletealternate(node*head);
   node*sortedInsert(int k);
   void display();
   node*sortfn(node*head);
};
void SLL::create(int k)
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
     temp->next=NULL;
  }
}
void SLL::InsBefore(int l,int k)
{
   node*temp=new node(l);
   node*t=head;
   if(head->data==k)
   {
     temp->next=head;
     head=temp;
   }
   else
   {
     while(t->next->data!=k)
     {
       t=t->next;
     }
     temp->next=t->next;
     t->next=temp;
   }
}
void SLL::InsAfter(int l,int k)
{
   node*temp=new node(l);
   node*t=head;
   while(t->data!=k)
   {
     t=t->next;
   }
   temp->next=t->next;
   t->next=temp;
}
void SLL::deletefn(int k)
{
  node*f=head->next;
  node*s=head;
  if(head->data==k)
  {
     head=head->next;
     delete s;
  }
  else
  {
     while(f->next!=NULL&&f->data!=k)
     {
       s=f;
       f=f->next;
     }
     if(f->next==NULL && f->data==k){s->next=NULL; delete f;}
     else
     {
        s->next=f->next;
        delete f;
     }
  }
}
node* SLL:: reversefn(node*head)
{
   if(head->next==NULL)
   {
      return head;
   }
   node*t=reversefn(head->next);
   node*temp=head->next;
   temp->next=head;
   head->next=NULL;
   return t;
}
node*SLL::deletealternate(node*head)
{
    if (head == NULL)
        return NULL;

    node *s = head;
    node *f = head->next;

    while (s != NULL && f != NULL)
    {
        s->next = f->next;
        delete(f);
        s = s->next;
        if (s != NULL)
            f = s->next;
    }
    return head;
}
node*SLL::sortfn(node*head)
{
    for(node*i=head;i->next->next!=NULL;i=i->next)
    {
        int mindata=i->data;node*minidx=i;
        for(node*j=i->next;j!=NULL;j=j->next)
        {
            if(j->data<mindata)
            {
                mindata=j->data;
                minidx=j;
            }
        }
        int temp=i->data;
        i->data=minidx->data;
        minidx->data=temp;
    }
    return head;
}
node*SLL::sortedInsert(int k)
{
   node*t=head;
   node*temp=new node(k);
   if(k<=head->data)
   {
      temp->next=head;
      head=temp;
   }
   else
   {
      while(t->next!=NULL && t->next->data<k)
      {
         t=t->next;
      }
      temp->next=t->next;
      t->next=temp;
   }
   return head;
}
void SLL::display()
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
    SLL obj;
    cout<<"enter number of elements:"<<endl;
    int n;
    cin>>n;
    while(n--)
    {
        int number;
        cin>>number;
        obj.create(number);
    }
    cout<<"enter numbers to create a list"<<endl;
    cout<<"enter the folowing numbers for respective choices:"<<endl;
    cout<< "1:Insert an element before another element in the existing List"<<endl;
    cout<< "2:Insert an element after another element in the existing list"<<endl;
    cout<< "3:Delete a given element from the list"<<endl;
    cout<< "4:display the list"<<endl;
    cout<< "5:Reverse the list"<<endl;
    cout<< "6:Sort the list"<<endl;
    cout<< "7:Delete every alternate node in the list"<<endl;
    cout<< "8:insert an element in a sorted list such that the order is maintained."<<endl;
    while(true)
    {
        int choice;
        cin>>choice;
        if(choice==9){break;}
        switch(choice)
        {
            case 1:{
                      cout<<"enter the number to insert and the number to be inserted before:"<<endl;
                      int l,k;
                      cin>>l>>k;
                      obj.InsBefore(l,k);
                      break;
                   }
            case 2:{
                      cout<<"enter the number to insert and the number to be inserted after:"<<endl;
                      int l,k;
                      cin>>l>>k;
                      obj.InsAfter(l,k);
                      break;
                   }
            case 3:{
                      cout<<"enter the number to be deleted"<<endl;
                      int l;
                      cin>>l;
                      obj.deletefn(l);
                      break;
                   }
            case 4:{
                      cout<<"the list is:"<<endl;
                      obj.display();
                      break;
                   }
            case 5:{
                      obj.head=obj.reversefn(obj.head);
                      obj.display();
                      break;
                   }
           case 6:{
                      obj.head=obj.sortfn(obj.head);
                      obj.display();
                      break;
                   }
            case 7:{
                      obj.head=obj.deletealternate(obj.head);
                      obj.display();
                      break;
                   }
            case 8:{
                      cout<<"enter the number to insert in sorted list"<<endl;
                      int l;
                      cin>>l;
                      obj.head=obj.sortedInsert(l);
                      obj.display();
                      break;
                   }
        }
    }

}

