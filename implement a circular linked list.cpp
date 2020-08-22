#include<iostream>
#include<string.h>
using namespace std;
class node{
  public:
  int data;
  node*next;
  }*head=NULL;
void node1(int n)
{
  node *t=new node;
  t->data=n;
  t->next=t;
  head=t;
}
void othernodes(int n)
{
  node*temp=head;
  node*t=new node;
  while(temp->next!=head)
  {
    temp=temp->next;
  }
  t->data=n;
  t->next=temp->next;
  temp->next=t;
}
void display(node*p)
{
  do
  {
    cout<<head->data<<" ";
    head=head->next;
  }while(p!=head);
}
int main()
{
  int p,l,i=0;
  cout<<"Enter the value in the first node of 1st linked list: ";
  cin>>p;
  node1(p);
  char n[3];
  while(i>=0)
  {
  cout<<"Do you want to add a new node \nEnter Yes or No :";
  cin>>n;
  if(strcmp(n,"yes")==0||strcmp(n,"Yes")==0){
  cout<<"Enter value for the next node:";
  cin>>l;
  othernodes(l);
  }
  else {
  cout<<"Dhanyawaad aapka\n";
  break;
  }
  }
  //afinsert(head,4,2);
  display(head);
  return 0;
}
