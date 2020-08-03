#include<iostream>
using namespace std;
int main()
{
    int i,j,temp=0;
    int a[]={0,3,5,8,4,2,5,1,9};
    for(i=0,j=8;i<j;i++,j--)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    cout<<"Reversed Array : ";
    for(i=0;i<9;i++)
    cout<<a[i]<<" ";
    
    return 0;
}
