#include<iostream>
using namespace std;
int main()
{
    int i,d=0;
    int a[]={1,2,9,4,5};
    for(i=0;i<4;i++)
    {
        if(a[i]<=a[i+1])
        continue;
        else
        {
            d++;
            break;
        }
    }
    if(d==0)
    cout<<"SORTED";
    else if (d==1)
    cout<<"UNSORTED";
    return 0;
}
