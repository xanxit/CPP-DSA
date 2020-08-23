#include<iostream>
#include<string.h>
using namespace std;
class node
{
  public:
  int data;
  node*next;
  node*prev;
}*head=NULL,*tail=NULL;
void node1(int n)
{
  node *t=new node;
  t->data=n;
  t->next=NULL;
  t->prev=NULL;
  head=tail=t;
}
void othernodes(int n)
{
  node *t=new node;
  t->data=n;
  tail->next=t;
  t->prev=tail;
  tail=t;

}
void addatbeg(int n)
{
  node*t=new node;
  t->data=n;
  head->prev=t;
  t->next=head;
  t->prev=NULL;
  head=t;
}
void addatlast(int n)
{
  node *t=new node;
  t->data=n;
  tail->next=t;
  t->prev=tail;
  t->next=NULL;
  tail=t;

}
/*void addatpos(int pos,int n)
{
  node*temp=head;
  node*t=new node;
  t->data=n;
  int i=1;
  while(i<pos-1)
  {
    temp=temp->next;
    i++;
  }
  t->next=temp->next->next;
  t->prev=temp;
  temp->next=t;
}*/
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
  othernodes(l);
  }
  else {
  cout<<"Dhanyawaad aapka\n";
  break;
  }
  }
  addatbeg(2);//adding 2 at the begining and making it the new head
  //addatpos(3,5);
  addatlast(3);//adding 3 at last and making it the new tail
  
  display();

}
