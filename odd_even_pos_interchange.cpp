#include<iostream>
using namespace std;

int main()
{
	int arr[30],i,size,temp;
	
	cout<<"Enter the size of array(even): ";
	cin>>size;
	cout<<"Enter the elements of array:\n";
	for(i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	
	//displaying user entered array.
	cout<<"\nThe original array is:\n";
		for(i=0;i<size;i++)
	{
		cout<<arr[i]<<"\t";
	}
	
	//Interchanging even and odd positions of array.
	for(i=0;i<size-1;i++)
	{
		if((i%2)==0)
		{
			temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
		}	
	}
	
	//displaying updated array.
	cout<<"\nArray after interchanging even and odd positions is:\n";
	for(i=0;i<size;i++)
	{
		cout<<arr[i]<<"\t";
	}
}
