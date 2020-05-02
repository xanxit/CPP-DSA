#include<iostream>
using namespace std;
int factorial(int);//function declaration
int main()
{int a;
cout<<"Enter the Number:";//entering a number whose factorial to be found
cin>>a;
int k= factorial(a);//function call
cout<<"\nFactorial = "<<k;
return 0;
}
int factorial(int y)//function definition
{
if(y==0)
return 1;
else
return y*factorial(y-1);//recursion
}
