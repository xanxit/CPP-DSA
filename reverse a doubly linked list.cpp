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
