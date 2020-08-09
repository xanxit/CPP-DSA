#include <iostream>
#include<string.h>
using namespace std;
class node
{
  public:
  int data;
  node*next;
};
node*first=NULL;
void delfrombeg()
{
  node*temp=first;
  first=first->next;
  free(temp);
}
void delfromend()
{
  node*temp=first;
  node*prev;
  while(temp->next!=NULL)
  {
    prev=temp;
    temp=temp->next;
  }
  prev->next=NULL;
  free(temp);
}
void delfrompos(int pos)
{
   node*temp=first;
  node*prev;

  int i=1;
  while(i<pos-1)
  {
    temp=temp->next;
    i++;
  }
  prev=temp->next;
  temp->next=prev->next;
  free(prev);
}
void push(node**p,int val)
{
  node*head=new node;
  head->data=val;
  head->next=first;
  first=head;
}
void add(node**p,int val)
{
 node*temp=*p;
  node*t=new node;
  t->data=val;
  t->next=NULL;
  while(temp->next!=NULL)
    temp=temp->next;
  temp->next=t;
}

void display(node*p)
{cout<<"LINKED LIST:\n";
  while(p!=NULL)
  {
    cout<<p->data<<" ";
    p=p->next;
  }
}
int main()
{
  int p,l,i=0;
  cout<<"Enter the value in the first node: ";
  cin>>p;
  push(&first,p);
  char n[3];
  while(i>=0){
  cout<<"Do you want to add a new node :\nEnter Yes or No :";
  cin>>n;
  if(strcmp(n,"yes")==0||strcmp(n,"Yes")==0){
  cout<<"Enter value for the next node:";
  cin>>l;
  add(&first,l);
  }
  else {
  cout<<"Dhanyawaad aapka\n";
  break;
  }
  }
  int k,p1;
  cout<<"1 for Deletion at front.\n2 for Deletion any node.\n3 for Deletion at the last node.\nEnter the choice where you want to insert : ";
  cin>>k;
  if(k==1||k==2||k==3)
  {
    
    if(k==1)
    {
      delfrombeg();
    }
    if(k==2)
    {
      cout<<"\nEnter the position you want to delete: ";
      cin>>p1;
      delfrompos(p1);
    }
    if(k==3)
    {
      delfromend();
    }
    display(first); 
  }
  else 
  cout<<"INVALID CHOICE.";
  
  return 0;
}

