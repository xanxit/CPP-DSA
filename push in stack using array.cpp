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
  return 0;
}
