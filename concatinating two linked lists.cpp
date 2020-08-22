#include<iostream>
#include<string.h>
using namespace std;
class node{
  public:
  int data;
  node*next;
}*head=NULL,*head2=NULL;
void node1(int n)
{
  node *t=new node;
  t->data=n;
  t->next=head;
  head=t;
}
void othernodes(int n)
{
  node*temp=head;
  node*t=new node;
  t->data=n;
  t->next=NULL;
  while(temp->next!=NULL)
  {
    temp=temp->next;
  }
  temp->next=t;
}
void node2(int n)
{
  node *t=new node;
  t->data=n;
  t->next=head2;
  head2=t;
}
void othernodes2(int n)
{
  node*temp0=head2;
  node*t=new node;
  t->data=n;
  t->next=NULL;
  while(temp0->next!=NULL)
  {
    temp0=temp0->next;
  }
  temp0->next=t;
}
void concat()
{
  node *temp1=head;
  node *temp2=head2;
  while(temp1->next!=NULL)
  temp1=temp1->next;
  temp1->next=head2;
}
void display()
{
  while(head!=NULL)
  {
    cout<<head->data<<" ";
    head=head->next;
  }
}
int main()
{
  int p,l,i=0;
  cout<<"Enter the value in the first node of 1st linked list: ";
  cin>>p;
  node1(p);
  char n[3];
  while(i>=0){
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
  int p1,l1;
  cout<<"Enter the value in the first node of 2st linked list: ";
  cin>>p1;
  node2(p1);
  char n1[3];
  while(i>=0){
  cout<<"Do you want to add a new node \nEnter Yes or No :";
  cin>>n1;
  if(strcmp(n1,"yes")==0||strcmp(n1,"Yes")==0){
  cout<<"Enter value for the next node:";
  cin>>l1;
  othernodes2(l1);
  }
  else {
  cout<<"Dhanyawaad aapka\n";
  break;
  }
  }
  concat();
  display();
  return 0;
}
