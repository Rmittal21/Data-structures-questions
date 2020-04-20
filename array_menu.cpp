#include<iostream>
using namespace std;

void Ins(int arr[],int size)
{
	int pos,x,i,choice;
	
	//x represents the value of element to be inserted
	cout<<"\nEnter the value of element to be inserted: ";
	cin>>x;
	
	size++;//increase size by 1
	
	cout<<"\nChoose where you want to insert from the following: ";
	cout<<"\n1.At the beginning";
	cout<<"\n2.At the end";
	cout<<"\n3.At the given position";
	cout<<"\nEnter your choice(1-3): ";
	cin>>choice;
	
	switch(choice)
	{
		case 1:	for(i=0;i<=size;i++)
					arr[i+1]=arr[i];
				arr[0]=x;
				break;
		case 2:	arr[size-1]=x;
				break;
		case 3:	//pos is the position at which value is to be inserted
				cout<<"Enter the position where you want to insert: ";
				cin>>pos;
				//shifting array elements forward
				for (i=size; i>= pos; i--) 
        			arr[i] = arr[i - 1]; 
  				// insert x at pos 
    			arr[pos - 1] = x; 
				break;
		default:cout<<"Invalid choice!";
				break;
	}
	
	cout<<"\nUpdated array is:\n";
	for(i=0;i<size;i++)
	{
		cout<<arr[i]<<"\t";
	}

}
void Del(int arr[],int size)
{
	int pos,i;
	cout<<"\nEnter the position of element you want to delete: ";
	cin>>pos;
	
	//shifting elements backward
	for(i=pos;i<=size;i++)
		arr[i-1]=arr[i];

	size--; //decrease size by 1
	
	cout<<"\nUpdated array is:\n";
	for(i=0;i<size;i++)
	{
		cout<<arr[i]<<"\t";
	}

}
void Trav(int arr[],int size)
{
	int i,val,flag=0,pos[10];
	cout<<"\nEnter the value of element you want to search: ";
	cin>>val;
	for(i=0;i<size;i++)
	{
		if(val==arr[i])
		{
			pos[flag]=i;
			/*pos array stores the position of array
			 element matched once or more.*/
			flag++;
		}	
	}
	if(flag==0)
		cout<<endl<<val<<" not found in the array.";
	else
	{
		//displaying the searched result
		cout<<endl<<val<<" is present at position(s): ";
		for(i=0;i<flag;i++)
		{
			cout<<pos[i]<<" ";
		}
	}
	
}
void Conc(int arr[],int size)
{
	int i,len,arr2[20],ori,j=0;
	//Taking array to be concatenated from the user as arr2[]
	cout<<"\nEnter the size of second array: ";
	cin>>len;
	cout<<"\nEnter array elements:\n";
	for(i=0;i<len;i++)
	{
		cin>>arr2[i];
	}
	
	ori=size;//stores original length of first array
	size+=len;//updating size of concatenated new array
	
	for(i=ori;i<=size;i++)
	{
		arr[i]=arr2[j];
		j++;
	}
	
	//displaying updated array
	cout<<"\nUpdated array after concatenating is:\n";
	for(i=0;i<size;i++)
	{
		cout<<arr[i]<<"\t";
	}
	
}
void Rev(int arr[],int size)
{
	int i,arr2[20],j=size-1;
	for(i=0;i<size;i++)
	{
		arr2[i]=arr[j];
		j--;
	}
	for(i=0;i<size;i++)
	{
		arr[i]=arr2[i];
	}
	
	//displaying updated array
	cout<<"\nReversed array is:\n";
	for(i=0;i<size;i++)
	{
		cout<<arr[i]<<"\t";
	}
}
void print(int arr[],int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		cout<<arr[i]<<"\t";
	}
}
int main()
{
	int size,i,arr[50],choice;	
	char ch;
	
	//size represents the number of elements of an array.
	cout<<"Enter the size of the array: ";
	cin>>size;
	
	cout<<"\nEnter the elements of the array:\n";
	//taking values of array from the user.
	for(i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	cout<<"\n**** MENU ****\n";
	cout<<"1.Insertion\n";
	cout<<"2.Deletion\n";
	cout<<"3.Traverse\n";
	cout<<"4.Concatenate\n";
	cout<<"5.Reverse\n";
	cout<<"6.Print\n";
	
	do
	{
		cout<<"Select the function to be performed(1-6): ";
		cin>>choice;
		switch(choice)
		{
			case 1:	Ins(arr,size);
					break;
			case 2: Del(arr,size);
					break;
			case 3: Trav(arr,size);
					break;
			case 4:	Conc(arr,size);
					break;
			case 5: Rev(arr,size);
					break;
			case 6: cout<<"\nElements of array are:\n";
					print(arr,size);
					break;
			default:cout<<"Invalid choice!";
					break;
		}
		cout<<"\nDo you want to perform more functions(y/n): ";
		cin>>ch;
	}while(ch=='y');
}
