#include<iostream>
using namespace std;
//Function to convert decimal to binary
void convertD2B(int n)
{
    int arr[20];
    int rem, i, size=0;
    while(n!=0)
    {
        rem= n%2;
        n/= 2;
        arr[size]= rem;
        size++;
    }
    cout<<"\nEquivalent binary number is: ";
    for(i=0;i<size;i++)
	{
		cout<<arr[i];
	}
}
int main()
{
	int num;
	cout<<"Enter a decimal number: ";
    cin>>num;
    //Function call to convert decimal to binary
    convertD2B(num);
	return 0;
}
