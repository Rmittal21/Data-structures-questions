//program to multiply two matrices
#include<iostream>
using namespace std;

int main ()
{
	int a[10][10],b[10][10],c[10][10],i,j,k,m,n,p,q;
	
	//m and n are the rows and columns of matrix A respectively.
	cout<<"Enter no. of rows of matrix A: ";
	cin>>m;
	cout<<"Enter no. of columns of matrix A: ";
	cin>>n;
	
	//p and q are the rows and columns of matrix A respectively.
	cout<<"\nEnter no. of rows of matrix B: ";
	cin>>p;
	cout<<"Enter no. of columns of matrix B: ";
	cin>>q;
	
	cout<<"\nEnter elements of matrix A:\n";
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	
	cout<<"\nEnter elements of matrix B:\n";
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			cin>>b[i][j];
		}
	}
	
	cout<<"\nMatrix A:\n";
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<a[i][j]<<"\t";
		}
		cout<<endl;
	}
	
	cout<<"\nMatrix B:\n";
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			cout<<b[i][j]<<"\t";
		}
		cout<<endl;
	}
	
	if(n==p)
	{
		cout<<"\nProduct of A and B:\n";
		//Initializing as a zero matrix
		for(i=0;i<m;i++)
		{
			for(j=0;j<q;j++)
			{
				c[i][j]=0;
			}
		}
		for(i=0;i<m;i++)
		{
			for(j=0;j<q;j++)
			{
				for(k=0;k<p;k++)
				{
					c[i][j]+=a[i][k]*b[k][j];
				}
			}	
		}
		for(i=0;i<m;i++)
		{
			for(j=0;j<q;j++)
			{
				cout<<c[i][j]<<"\t";
			}
			cout<<endl;
		}
	}
	else
		cout<<"\nProduct of A and B cannot be calculated.";
	
}
