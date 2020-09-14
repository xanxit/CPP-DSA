#include <iostream>
#include<string.h>
using namespace std;
#define max 6
class Stack
{
  public:
  char s[max];
  int top;
};
void push(Stack *s,char o)
{
  s->top++;
  s->s[s->top]=o;
  cout<<s->s[s->top]<<'\n';
}
void pop(Stack *s)
{
  char x;
  x=s->s[s->top];
  cout<<x<<" removed \n";
  s->top--;


}
int isEmpty(Stack st)
{
  return st.top==-1?1:0;
}
int isbalanced(char *s)
{
  Stack st;
  st.top=-1;
  for(int i=0;s[i]!=0;i++)
{
  if(s[i]=='('||s[i]=='{'||s[i]=='[')
  push(&st,s[i]);
  else if(s[i]==')'||s[i]=='}'||s[i]==']')
  {
    if(isEmpty(st)==1)return 0;
    pop(&st);
}
}
return isEmpty(st)==1?1:0;

}
int main()
{
  Stack st;
  char *s;
  s=new char[12];
  strcpy(s,"[{(a+b)*(c-d)}");
  int p= isbalanced(s);
  p==1?cout<<"Paranthesis are Balanced":cout<<"Paranthesis are not balanced";
  return 0;
  
}
