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
void insert(int n)
{
  node*temp=head;
  node*t=new node;
  t->data=n;
  while(temp->next!=head)
  {
    temp=temp->next;
  }
  temp->next=t;
  t->next=head;
  head=t;

}
void insertaf(int pos,int val)
{
  node*temp=head;
  node*t=new node;
  int i=1;
  while(i<pos)
  {
    temp=temp->next;
    i++;
  }
  t->data=val;
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
  insert(1);//adding 1 to the head position
  insertaf(3,9);//inserting after 3rd position
  display(head);
  return 0;
}
