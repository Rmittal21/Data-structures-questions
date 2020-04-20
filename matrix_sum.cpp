//program to find sum of two matrices
#include<iostream>
using namespace std;

int main ()
{
	int a[10][10],b[10][10],i,j,m,n;
	
	//m and n are the rows and columns of matrices respectively.
	cout<<"Enter no. of rows of matrix A and B: ";
	cin>>m;
	cout<<"\nEnter no. of columns of matrix A and B: ";
	cin>>n;
	
	cout<<"\nEnter elements of matrix A:\n";
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	
	cout<<"\nEnter elements of matrix B:\n";
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>b[i][j];
		}
	}
	
	//displaying first matrix
	cout<<"\nMatrix A:\n";
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<a[i][j]<<"\t";
		}
		cout<<endl;
	}
	
	//displaying second matrix
	cout<<"\nMatrix B:\n";
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<b[i][j]<<"\t";
		}
		cout<<endl;
	}
	
	//displaying sum of two matrices
	cout<<"\nSum of A and B:\n";
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<a[i][j]+b[i][j]<<"\t";
		}
		cout<<endl;
	}
}
