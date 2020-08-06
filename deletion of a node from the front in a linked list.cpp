#include<iostream>
using namespace std;
class Node
{
  public:
  int data;
  Node*next;
};
Node*first=NULL;
void insert(Node*p,int val,int pos)
{
Node*t=new Node;
if(pos==0)
{
  t->data=val;
  t->next=first;
  first=t;
}
else
{
p=first;
for(int i=0;i<pos-1;i++)
{
   p=p->next;
}
if(p!=NULL)
{
  t->data=val;
  t->next=p->next;
  p->next=t;
}
}
}
void display(Node*p)
{
while(p!=NULL)
{
  cout<<p->data<<" ";
  p=p->next;
}
}
