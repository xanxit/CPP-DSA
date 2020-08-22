
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
int checkloop()
{
  node *p=head;
  node *q=head;
  do{
    p=p->next;
    q=q->next;
    q=q!=NULL?q->next:NULL;
  }while(p!=NULL&&q!=NULL);
  if(p==q)
  return 1;
  else 
  return 0;

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
  int k=checkloop();
  if(k==1)
  cout<<"The Linked List contain a loop";
  else 
  cout<<"THis Linked List does not contain a loop";
  display();
  return 0;
}
