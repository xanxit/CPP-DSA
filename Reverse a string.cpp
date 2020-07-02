#include <iostream>
#include<string>
using namespace std;
int main() {
  char str[]="Sanchit";
  int len=0;
  for(int i=0,j=6;i<j;i++,j--)
  {
    len=str[i];
    str[i]=str[j];
    str[j]=len;

  }
  for(int i=0;str[i]!=0;i++)
  cout<<str[i];
  return 0;
 
}
