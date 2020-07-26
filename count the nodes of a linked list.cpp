#include <iostream>
using namespace std;
class node
{
  public:
  int data;
  node*next;
};
//node*first=NULL;
void insert(node*,int,int);
void disp(node*);
int main()
{
  /*int i,x,n;
  cout<<"Enter no. of nodes ";
  cin>>n;
  for(i=0;i<n;i++)
  {
    cout<<"Enter data ";
    cin>>x;
    insert(first,i,x);
  }*/
  node*head=NULL;
  node*second=NULL;
  node*third=NULL;
  node*last=NULL;
  head=new node;
  second = new node;
  third=new node;
  last=new node;
  head->data=1;
  head->next=second;
  second->data=0;
  second->next=third;
  third->data=9;
  third->next=last;
  last->data=6;
  last->next=NULL;


  disp(head);
  return 0;
}
/*void insert(node*p,int pos,int val)
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
    {
      p=p->next;
    }
    if(p!=0)
    {
      t->data=val;
      t->next=p->next;
      p->next=t;
    }
  }
}*/
void disp(node*p)
{int count=0;
  while(p!=NULL)
  {
    count++;
    p=p->next;
  }
  cout<<"The number of nodes created : "<<count ;
}
