#include<iostream>
using namespace std;
int main()
{
int n,i,insert,pos;
  cout<<"Enter the number of element you want in your array\n";
  cin>>n;
  int a[n];//creating an array of the given size
  for(i=0;i<n;i++)
  {
    cout<<"Enter the Element in "<<i<<" index : ";
    cin>>a[i];
    cout<<endl;
  }
  cout<<"Enter the element you want to insert : ";
  cin>>insert;
  cout<<endl;
  cout<<"Enter the position you want to add : ";
  cin>>pos;
  cout<<endl;
   n++;
  for(i=n;i>=pos;i--)
    a[i]=a[i-1];
  a[pos-1]=insert;
  for(i=0;i<n;i++)
    cout<<a[i]<<" ";
  return 0;
}
