// Mat Inverse.cpp : Defines the entry point for the console application.
//

#include "iostream.h"
#include "stdlib.h"
#include <iomanip.h>

int main()
{
	
int n;
float **ppA,**ppB,multip,pivot;

//ppB is initilazed to be the identity matrix
//ppA is the coefficient matrix


cout<<"Enter the Matrix dimentions"<<endl;
cin>>n;


cout<<"Enter the matrix A elements"<<endl;
	ppA=new float*[n];
	for(int i=0;i<=n-1;i++)
		ppA[i]=new float [n];

	ppB=new float*[n];
	for( i=0;i<=n-1;i++)
		ppB[i]=new float [n];
///// Initializing Matrix B to the identity matrix /////
	
	for( i=0;i<=n-1;i++)
		for(int j=0;j<=n-1;j++)
				if(i==j)
					ppB[i][j]=1;
				else ppB[i][j]=0;


/////// Reading matrix A [Coefficient M,atrix] ///

	for( i=0;i<=n-1;i++)
		for(int j=0;j<=n-1;j++)
			{
				cout<<"Enter element A["<<i<<"]["<<j<<"]:";
				cin>>ppA[i][j];
			}






///////////////////////////////////		
	for( i=0;i<=n-1;i++)
		{
			
	

	//ERO Over the row containing the pivot
		
		
		pivot=ppA[i][i];
		for(int k=0;k<=n-1;k++)
		{
		ppA[i][k]=ppA[i][k]/pivot;
		ppB[i][k]=ppB[i][k]/pivot;
		
		}
	
	//ERO's Over the rows don't contain the pivot
	//Now pivot=1
	for(int j=0;j<=n-1;j++)
		{
		if(j!=i)
			{
				multip=ppA[j][i];
			for(int k=0;k<=n-1;k++)
				{	
					ppA[j][k]+=(-multip*ppA[i][k]);
				    ppB[j][k]+=(-multip*ppB[i][k]);
				}
			}
		}

	////// The matrix after each ERO's step
		
			cout<<endl<<"==================================="<<endl;	
		for ( j=0;j<=n-1;j++)
		{
			for(int k=0;k<=n-1;k++)
			cout<<setw(6)<<ppB[j][k]<<" ";
			cout<<endl;
			}
		
	}




		cout<<endl<<"==================================="<<endl;	
		cout<<"The Identity Matrix =\n";
		for (int j=0;j<=n-1;j++)
			{
				for(int k=0;k<=n-1;k++)
				cout<<ppA[j][k]<<" ";
			cout<<endl;
			}
		
		cout<<endl<<"==================================="<<endl;	
		cout<<"The inverse of the coefficient matrix=\n";
		for ( j=0;j<=n-1;j++)
		{
			for(int k=0;k<=n-1;k++)
			cout<<setw(6)<<setfill(' ')<<ppB[j][k]<<" ";
			cout<<endl;
			}
		


			
	system("PAUSE");
	return 0;
}

