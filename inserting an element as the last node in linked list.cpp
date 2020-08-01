#include <iostream>
using namespace std;
class Node
{
  public:
  int data;
  Node*next;
};
Node*first=NULL;
void insert(Node*p,int pos,int val)
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
void append(Node**p,int val)
{
  Node*temp=*p;
  Node*lastnode=new Node;
  lastnode->data=val;
  lastnode->next=NULL;
  if(temp->next==NULL)
  {
    temp=lastnode;
    return;
  }
  else 
  {
    while(temp->next!=NULL)
    {
      temp=temp->next;
    }
    temp->next=lastnode;
  }
}
void display(Node*p)
{cout<<"LINKED LIST :\n";
  while(p!=NULL)
  {
    cout<<p->data<<" ";
    p=p->next;
  }
}
int main()
{
  int i=0,x,n;
  cout<<"Enter the number of nodes of which you want to create a linked list: ";
  cin>>n;
  while(i<n)
  {
    cout<<"Enter data ";
    cin>>x;
    insert(first,i,x);
    i++;
  }
  append(&first,9);//passing 9 as the argument now last node will be 9
  display(first);
return 0;
}
