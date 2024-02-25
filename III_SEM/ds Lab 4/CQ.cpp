#include<iostream>
using namespace std;
const int Size=5;
class CQ
{
    private:
    int f;
    int r;
    int arr[Size];
    public:
    CQ()
    {
        f=-1;
        r=-1;
    }
    bool isEmpty()
    {
       if(r==f)
       {
          return true;
       }
       return false;
    }
    bool isFull()
    {
        if(f==-1 && r==Size-1)
        {
            return true;
        }
        else if(r==(f-1))
       {
          return true;
       }
       return false;
    }
    void push(int k)
    {
       if(isFull()){cout<<"queue is full"<<endl;
       return;}
       r=(r+1)%Size;
       arr[r]=k;
    }
    int top()
    {
      return arr[(f+1)%Size];
    }
    void pop()
    {
        if(isEmpty())
        {
           cout<<"queue is empty"<<endl;
           return;
        }
        f=(f+1)%Size;
    }
    void display()
    {
        while(!isEmpty())
        {
           cout<<top()<<" ";
           pop();
        }
        cout<<endl;
    }
};
int main()
{
   cout<<"enter the number of elements"<<endl;
   int n;
   cin>>n;
   CQ obj;
   for(int i=0;i<n;i++)
   {
      if(obj.isFull())
      {
         cout<<"queue is full"<<endl;
         break;
      }
      int k;cin>>k;
      obj.push(k);
   }
   obj.pop();
   obj.pop();
   obj.display();
}
