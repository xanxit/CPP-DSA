#include <iostream>
#include<string.h>
using namespace std;
class stack
{
  public:
  int size,top,*s;
};
void createstack(stack *st)
{ 
  cout<<"Enter Size of the stack : ";
  cin>>st->size;
  st->s=new int[st->size];
  st->top=-1;
 
}
void push(stack *st,int val)
{
  if(st->top==st->size-1)
  {
    cout<<"OVERFLOW";
  }
  else
  {
    st->top++;
    st->s[st->top]=val;
  }
}
int pop(stack *st)
{
  int x=-1;
  if(st->top==-1)
  cout<<"Underflow";
  else
  {
    x=st->s[st->top];
    st->top--;
  }
  return x;
}
//peek () − get the top data element of the stack, without removing it
int peek(stack st,int pos)
{
  int x=-1;
  if(st.top-pos+1<0)
  cout<<"INVALID";
  else
  x=st.s[st.top-pos+1];
  return x;

}
void printstack(stack st)
{
  for(int i=st.top;i>=0;i--)
  {
    cout<<st.s[i]<<endl;
  }
}
int main()
{ char n[3];
  stack st;
  int i=1,l,u;
  createstack(&st);
  cout<<"Enter first element in the stack : ";
  cin>>u;
  push(&st,u);
  while(i<=st.size-1)
  {
  cout<<"DO YOU WANT TO PUSH AN ELEMENT IN THE STACK?\nYES OR NO\nCHOICE =";
  cin>>n;
  if(strcmp(n,"yes")==0||strcmp(n,"Yes")==0)
  {
  cout<<"Enter value for the next node:";
  cin>>l;
  push(&st,l);
  }
  else
 {
  cout<<"Dhanyawaad aapka\n";
  break;
  }
  i++;
 }
  printstack(st);
  int pos;
  cout<<"Enter the position whose value you want in the array : ";
  cin>>pos;
  int r=peek(st,pos);
  cout<<"Value = "<<r;
  return 0;
}
