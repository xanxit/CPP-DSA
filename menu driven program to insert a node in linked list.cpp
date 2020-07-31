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
void push(Node**p,int l)
{
  Node*t=new Node;
  t->data=l;
  t->next=*p;
  *p=t;
}
void insertaf(Node*p,int val,int pos)
{
  Node*temp=NULL;
  temp=p;
  Node*newnode=new Node;
  int i=1;
  while(i<pos)
  {
    temp=temp->next;
    i++;
  }
  newnode->data=val;
  newnode->next=temp->next;
  temp->next=newnode;
}
void append(Node**head,int h)
{
  Node*temp=*head;
  Node*lastnode=new Node;
  lastnode->data=h;
  lastnode->next=NULL;
  if(temp==NULL)
  {
    temp=lastnode;
    return;
  }
  else 
  {
    while(temp->next!=NULL)
      temp=temp->next;
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
  int k,val1,p;
  cout<<"1 for Insertion at front.\n2 for Insertion after any node.\n3 for Insertion at the last node.\nEnter the choice where you want to insert : ";
  cin>>k;
  if(k==1||k==2||k==3)
  {
    cout<<"Enter data you want to insert :";
    cin>>val1;
    if(k==1)
    {
      push(&first,val1);
    }
    if(k==2)
    {
      cout<<"\nEnter the position after which you want to add the new node: ";
      cin>>p;
      insertaf(first,val1,p);
    }
    if(k==3)
    {
      append(&first,val1);
    } 
  }
  else 
  cout<<"INVALID CHOICE.";
  display(first);
  return 0;
}
