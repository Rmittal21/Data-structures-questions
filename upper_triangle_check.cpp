//program to check upper triangular matrix
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
	
	//checking square matrix
	if(m==n)
	{
		for(i=0;i<m;i++)
		{
			for(j=0;j<m;j++)
			{
				//checking lower triangle elements are zero
				if(i>j)
				{
					if(a[i][j]!=0)
					{
						flag++;
						break;
					}
				}
			}
		}
	}
	else
		cout<<"\nUpper triangular matrix cannot be checked.";
		
	if(flag==0)
		cout<<"\nMatrix A is upper triangular matrix";
	else
		cout<<"\n Matrix A is not an upper triangular matrix";
		
	end=clock();
	double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
    cout <<"\nTime taken by program is : "<< fixed  
         <<time_taken<<setprecision(5);
    cout <<" sec "<< endl; 

}
