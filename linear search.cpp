#include<iostream>
using namespace std;
int main()
{
    int a[]={2,3,5,7,0};
    int i,k;
    cout<<"Enter the element to be searched ";
    cin>>k;
    for(i =0;i<5;i++)
    {
        if(k==a[i])
        cout<<endl<<"The position of the element in the array is "<<i<<endl;
    }
    return 0;
}
