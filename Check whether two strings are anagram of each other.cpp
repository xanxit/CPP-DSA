#include<iostream>
using namespace std;
int main()
{
char a[]="decimal";
char b[]="medical";
int c=0;
for(int i=0;a[i]!=0;i++)
{
  for(int j=0;b[j]!=0;j++)
  {
    if(a[i]==b[j])
    {
      c++;
      break;
    }
    else continue;
  }
}
if(c==7)//7 is the length of the string
{
  cout<<"Anagram";
}
else
cout<<"no";
return 0;
}
