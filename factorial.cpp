#include<iostream>
using namespace std;
int factorial(int);
int main()
{int a;
cout<<"Enter the Number:";
cin>>a;
int k= factorial(a);
cout<<"\nFactorial = "<<k;
return 0;
}
int factorial(int y)
{
if(y==0)
return 1;
else
return y*factorial(y-1);
}
