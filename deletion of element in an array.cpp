#include<iostream>
using namespace std;
int main()
{
    int a[]={2,3,5,7,0};
    int i,pos;
    cout<<"Enter the position of the element to be deleted ";
    cin>>pos;
    for(i =pos;i<5;i++)
    {
        a[i]=a[i+1];
    }
    for(i=0;i<4;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
