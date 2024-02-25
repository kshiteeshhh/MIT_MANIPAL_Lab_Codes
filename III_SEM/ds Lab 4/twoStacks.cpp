#include <iostream>
using namespace std;



class twoStacks {
    int* arr;
    int len;
    int top1, top2;



public:
    twoStacks(int n)
    {
        len = n;
        arr = new int[n];
        top1 = -1;
        top2 = len;
    }



   void push1(int x)
    {



       if (top1 < top2 - 1) {
            arr[++top1] = x;
        }
        else {
            cout << "Stack Overflow";
            return;
        }
    }



   void push2(int x)
    {



       if (top1 < top2) {
            arr[--top2] = x;
        }
        else {
            cout << "Stack Overflow";
            return;
        }
    }




    int pop1()
    {
        if (top1 >= 0) {
            return arr[top1--];
        }
        else {
            cout << "Stack UnderFlow";
            return -1;
        }
    }



   int pop2()
    {
        if (top2 < len) {
            return arr[top2++];
        }
        else {
            cout << "Stack UnderFlow ";
            return -1;



       }
    }
};




int main()
{
    int n;
    cout << "Enter size of stack: ";
    cin >> n;
    twoStacks ts(n);



   int ch, a;




    int men;




    while (true)
    {
        cout << "\npush(1) or pop(2)? ";
        cin >> men;
        if (men == -1) {break;}
        switch (men)
    {
    case 1:
        cout << "Enter element to push: ";
        cin >> a;
        cout << "enter stack number 1/2: ";
        cin >> ch;



       switch (ch)
        {
        case 1:
            ts.push1(a);
            break;
        case 2:
            ts.push2(a);
            break;
        }
        break;
    case 2:
        cout << "enter stack number 1/2: ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << ts.pop1();



           break;
        case 2:
            cout << ts.pop2();



           break;
        }
        break;
    }
    }
    }

