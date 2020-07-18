#include <iostream>
#include<string.h>
using namespace std;
int main()
{
  int a[3][3],x=1;
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
      if(i==j){
      cout<<x<<" ";
      x++;
      }
      else 
      cout<<"0 ";
    
    }
    cout<<"\n";
  }
  return 0;
}
