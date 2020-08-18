#include <iostream>
#include<string.h>
using namespace std;
class node 
{
  public:
  int data;
  node*next;
};
node*head=NULL;
void node1(int n)
{
  node*t=new node;
  t->data=n;
  t->next=head;
  head=t;
}
void addnode(node**p,int n)
{
  node*temp=*p;
  node*t=new node;
  t->data=n;
  t->next=NULL;
  while(temp->next!=NULL)
  {
    temp=temp->next;
  }
  temp->next=t;
}
void reverse()
{
  node*prev,*current,*nextn;
  prev=NULL;
  current=nextn=head;
  while(nextn!=NULL)
  {
    nextn=nextn->next;
    current->next=prev;
    prev=current;
    current=nextn;
  }
  head=prev;
}
void display(node*p)
{
  cout<<"LINKED LIST: \n";
  while(p!=NULL)
  {
    cout<<p->data<<" ";
    p=p->next;
  }
  cout<<endl;
}

int main()
{
  int p,l,i=0;
  cout<<"Enter the value in the first node: ";
  cin>>p;
  node1(p);
  char n[3];
  while(i>=0){
  cout<<"Do you want to add a new node :\nEnter Yes or No :";
  cin>>n;
  if(strcmp(n,"yes")==0||strcmp(n,"Yes")==0){
  cout<<"Enter value for the next node:";
  cin>>l;
  addnode(&head,l);
  }
  else {
  cout<<"Dhanyawaad aapka\n";
  break;
  }
  }
  display(head);
  reverse();
  display(head);
  return 0;
}
