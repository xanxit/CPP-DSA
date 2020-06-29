#include <iostream>
using namespace std;

int main()
{
	int count, i, num, first, last, middle;
	cout<<"How many elements would you like to enter?:"; 
        cin>>count;
	int arr[count];
	for (i=0; i<count; i++)
	{
		cout<<"Enter number "<<(i+1)<<": "; 
                cin>>arr[i];
	}
	cout<<"Enter the number that you want to search:"; 
        cin>>num;
	first = 0;
	last = count-1;
	middle = (first+last)/2;
	while (first <= last)
	{
	   if(arr[middle] < num)
	   {
		first = middle + 1;//here we are left with just half of the arrat

	   }
	   else if(arr[middle] == num)
	   {
		cout<<num<<" is found in the array at the location "<<middle+1<<"\n"; 
                break; 
           } 
           else { 
                last = middle - 1; 
           } 
           middle = (first + last)/2; //here we are changing the value of mid
        } 
        if(first > last)
	{
	   cout<<num<<" not found in the array";
	}
	return 0;
}
