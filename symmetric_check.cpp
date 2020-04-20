//program to check symmetric matrix
#include<bits/stdc++.h>
using namespace std;

int main ()
{
	int a[10][10],i,j,m,n,flag=0;
	clock_t start,end;

	//m and n are the rows and columns of matrix A respectively.
	cout<<"Enter no. of rows of matrix A: ";
	cin>>m;
	cout<<"Enter no. of columns of matrix A: ";
	cin>>n;
	
	cout<<"\nEnter elements of matrix A:\n";
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	
	start=clock();
	cout<<"\nMatrix A:\n";
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<a[i][j]<<"\t";
		}
		cout<<endl;
	}
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]!=a[j][i])
				flag++;
		}
	}
	
	if(flag==0)
		cout<<"A is a symmetric matrix";
	else
		cout<<"A is not a symmetric matrix";
}
