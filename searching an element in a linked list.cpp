#include <iostream>
using namespace std;
class node{
  public:
  int data;
  node*next;
};
node*first=NULL;
void insert(node*,int,int);
int search(node*,int);
int main()
{
  int i,x,n;
  cout<<"Enter the number of node : ";
  cin>>n;
  int z=9;
  for(i=0;i<n;i++)
  {
    cout<<"Enter data in "<<i+1<<" node :";
    cin>>x;
    insert(first,i,x);
  }
  int k = search(first,z);
  if(k==0)
  {
    cout<<"Not Present";
  }
   return 0;
}
void insert(node*p,int pos,int val)
{
  node*t=NULL;
  t=new node;
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
    {p=p->next;
    }
    if(p!=NULL)
    {
     t->data=val;
     t->next=p->next;
     p->next=t;
    } 
  }
}
int search(node*p,int z)
{ int i=0;
  while(p!=NULL)
  { i++;
    if(z==p->data)
    {cout<<"\nPresent at node "<<i;
    return i;
    }
    p=p->next;
  }
  return 0;
}
