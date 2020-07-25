#include <iostream> 
using namespace std; 
  
class Node { 
public: 
    int data; 
    Node* next; 
}; 

int main() 
{ 
    Node* head = NULL; 
    Node* second = NULL; 
    Node* third = NULL; 
    int m=INT8_MIN;//assigning the value of m to the minimum value of integer in the 8 bit of compiler.
  
    // allocate 3 nodes in the heap 
    head = new Node(); 
    second = new Node(); 
    third = new Node(); 
  
    head->data = 1; // assign data in first node 
    head->next = second; // Link first node with second 
  
    second->data = 4; // assign data to second node 
    second->next = third; 
  
    third->data = 3; // assign data to third node 
    third->next = NULL; 
      while (head != NULL) { 
        if(head->data>m)//checking if the node containing data is greater than the value of m which is firstly considered as the lowest integer value.
          m=head->data;
        head = head->next; 
      } 
      cout<<"MAX = "<<m;
  
    return 0; 
} 
