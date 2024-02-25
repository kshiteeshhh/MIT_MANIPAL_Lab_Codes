#include<iostream>
#include<string.h>
using namespace std;
int lenfn(char s[100])
{
  int len=0;
  for(int i=0;s[i]!='\0';i++)
  {
    len++;
  }
  return len;
}
void concatefn(char s1[100],char s2[100])
{
   int i=0;
   while(s1[i]!='\0')
   {
     i++;
   }
   int k=0;
   while(s2[k]!='\0')
   {
      s1[i]=s2[k];
      k++;
      i++;
   }
   puts(s1);
}
int comparefn(char s1[100],char s2[100])
{
  for(int i=0;s1[i]!='\0';i++)
  {
     if(s1[i]<s2[i])
     {
        return 1;
     }
     else if(s1[i]>s2[i])
     {
        return 2;
     }
  }
  return 0;
}
void insertfn(char s1[100],char s2[100],int k)
{
   char answer[100];
   int i=0; int temp=k;
   for(i=0;i<k;i++)
   {
      answer[i]=s1[i];
   }
   int j=0;i=k;
   while(s2[j]!='\0')
   {
      answer[i]=s2[j];
      j++;i++;
   }
   while(s1[temp]!='\0')
   {
      answer[i]=s1[temp];
      i++;temp++;
   }
   cout<<"string after insertion is:"<<endl;
   for(int m=0;answer[m]!='\0';m++)
   {
      cout<<answer[m];
   }
   cout<<endl;
}
void deletefn(char s2[100],int l1)
{
      int cn;
      cout<<"Enter no of characters to be deleted:";
      cin>>cn;
      cout<<"Enter the position:";
      int p;
    cin>>p;
    int i;
      for(i = p + cn; i < l1; i++)
   {
      s2[i - cn] = s2[i];
   }
   s2[i - cn] = '\0';
   cout<<"After deleting:"<<s2;
      cout<<endl;
}
int main()
{
   cout<< "enter the following numbers for the repective choices:"<<endl;
    cout<< "1:to calculate the length"<<endl<<"2: to concatinate 2 strings"<<endl<<"3: string comparison"<<endl<<"4:to insert a substring"<<endl<<"5: to delete a substring"<<endl;
    int c;
    cin>>c;
    fflush(stdin);
    switch(c)
    {
       case 1:{
        char s[100];
        cout<<"enter the string:"<<endl;
        gets(s);
       cout<< "length of the string is:"<<lenfn(s)<<endl;
       break;
       }

       case 2:{
       cout<< "enter two strings for concatenation"<<endl;
       char s2[100],s1[100];
       gets(s1);
       gets(s2);
       cout<< "string after concatenation is:";
       concatefn(s1,s2);
       cout<<endl;
       break;
       }

       case 3:{
       cout<< "enter two strings for comparison"<<endl;
       char str2[100],str1[100];
       gets(str1);
       gets(str2);
       int k=comparefn(str1,str2);
       if(k==1){cout<<"string 1 is smaller"<< endl;}
       else if(k==2){cout<<"string 2 is smaller"<<endl;}
       else{cout<<"strings are equal"<<endl;}
       break;
       }

       case 4:{
       cout<< "enter the string and substring for insertion"<<endl;
       char st2[100],st1[100];
       gets(st1);
       gets(st2);
       cout<< "position to insert"<<endl;
       int l;cin>>l;
       insertfn(st1,st2,l);
       break;
       }
       case 5:
        {
            cout<<"enter the string"<<endl;
            char str2[100];
            cin>>str2;
            int l1=lenfn(str2);
            deletefn(str2,l1);
            break;
        }

    }
}
