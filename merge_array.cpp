#include<iostream>
using namespace std;

int main()
{
	int a[50],b[50],c[50],i,j,len1,len2,temp;
	
	//Taking array 1 from the user
	cout<<"Enter the size of array 1: ";
	cin>>len1;
	cout<<"Enter elements of array 1:\n";
	for(i=0;i<len1;i++)
	{
		cin>>a[i];
	}
	
	//Taking array 2 from the user
	cout<<"Enter the size of array 2: ";
	cin>>len2;
	cout<<"Enter elements of array 2:\n";
	for(i=0;i<len2;i++)
	{
		cin>>b[i];
	}
	
	// merging the two arrays
    for(i=0; i<len1; i++)
    {
        c[i] = a[i];
    }
    for(j=0; j<len2; j++)
    {
        c[i] = b[j];
        i++;
    }
    
    int sum=len1+len2;
    
	// sorting the merged array
    for(i=0; i<sum-1; i++)
    {
        for(j=0; j<sum-1; j++)
        {
            if(c[i]>c[i+1])
            {
                temp = c[i];
                c[i] = c[i+1];
                c[i+1] = temp;
            }
        }
    }
    
    //displaying array1
    cout<<"\nElements of array1 are:\n";
    for(i=0;i<len1;i++)
    {
    	cout<<a[i]<<"\t";
	}
	
    //displaying array2
    cout<<"\nElements of array2 are:\n";
    for(i=0;i<len2;i++)
    {
    	cout<<b[i]<<"\t";
	}
	cout<<endl;
	
    //displaying merged array in ascending order.
    cout<<"\nElements of merged array are:\n";
    for(i=0;i<sum;i++)
    {
    	cout<<c[i]<<"\t";
	}
}
