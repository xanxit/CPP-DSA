#include<iostream>
using namespace std;
int main()
{
    int i;
    int a[]={1,3,6};
    for(i=0;i<6;i++)
   {
       if(a[i]-i==a[0])
       continue;
       else
       {
           int temp=a[0]+i;
           a[i+1]=a[i];
           a[i]=temp;
           cout<<"Missing elements at position "<<i+1<<" is "<<a[i]<<" \n";
       }
   }
   cout<<"\nThe Whole Array looks like: ";
   for(i=0;i<6;i++)
   cout<<a[i]<<" ";
  
    return 0;
}
