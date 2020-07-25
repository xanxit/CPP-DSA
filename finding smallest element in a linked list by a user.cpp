#include <iostream>
using namespace std;
class Node{
  public:
  int data;
  Node*next;
};
Node*first=NULL;
void insert(Node*p,int pos,int val)
{
  int i;
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
        for(i=0;i<pos-1;i++)
            p=p->next;
        if(p!=NULL)
            {
                t->data=val;
                t->next=p->next;
                p->next=t;
            }
    }
}
void display(Node*p)
{ int m= INT8_MAX;
  while(p!=NULL)
  {
    if(p->data<m)
      m=p->data;
    p=p->next;
  }
 cout<<"MIN= "<<m;
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
  display(first);
return 0;
}
