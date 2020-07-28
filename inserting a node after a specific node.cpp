#include<iostream>
using namespace std;
class Node
{
  public:
  int data;
  Node*next;
};
Node*first=NULL;
void insert(Node*p,int pos,int val)
{ int i=0;
  Node*t=NULL;
  t=new Node;
  if(pos==0)
  {
    t->data=val;
    t->next=first;
    first=t;
  }
  else
  {
    p=first;
    while(i<pos-1)
    {
      p=p->next;
      i++;
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
void afinsert(Node*p,int z,int pos)
{
  Node*temp=NULL;
  temp=p;
  Node*newnode=NULL;
  newnode=new Node;

  int i=1;
  while(i<pos)
  {
    temp=temp->next;
    i++;
  }
  newnode->data=z;
  newnode->next=temp->next;
  temp->next=newnode;
  
}
int main()
{
  int i,x,n;
  cout<<"Enter the number of Nodes: ";
  cin>>n;
  for(i=0;i<n;i++)
  {
    cout<<"Enter data in the "<<i+1<<" node:";
    cin>>x;
    insert(first,i,x); 
  }
  cout<<"\nEnter the position after which you want the new node to get inserted : ";
  int c,p;
  cin>>c;
  cout<<"\nEnter the Value to be added : ";
  cin>>p;
  afinsert(first,p,c);
  display(first);
return 0;
}
