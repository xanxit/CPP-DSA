#include <iostream>
#include<string.h>
using namespace std;
class Node
{
  public:
  int data;
  Node*next;
}*top=NULL;
void push(int x)
{
  Node*t=new Node;
  if(t==NULL)
  {
    cout<<"Stack Overflow";
    return;
  }
  else {
    t->data=x;
    t->next=top;
    top=t;
  }
}
void display()
{
  Node* p;
    int x = -1;
   
        p = top;
        x = p->data;
        cout<<x<<" \n";
        top = top->next;

        free(p);
        display();

}
int main() 
{
  int p,l;
  cout<<"Enter the value in the first node of 1st linked list: ";
  cin>>p;
  push(p);
  char n[3];
  while(1)
  {
  cout<<"Do you want to add a new node \nEnter Yes or No :";
  cin>>n;
  if(strcmp(n,"yes")==0||strcmp(n,"Yes")==0){
  cout<<"Enter value for the next node:";
  cin>>l;
  push(l);
  }
  else {
  cout<<"Dhanyawaad aapka\n";
  break;
  }
  }
  display();//displaying using pop operation to free the space!!!
  return 0;
}   
