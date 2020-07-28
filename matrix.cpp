#include <iostream>
using namespace std;

int main()
{
int m,n,L,q;
float **ppA,**ppB,**ppC;
cout<<"Enter the dimensions of the first matrix\n";
cin>>m>>n;
cout<<"Enter the dimensions of the second matrix\n";
cin>>L>>q;

ppA=new float*[m];
for(int i=0;i<=m-1;i++)
ppA[i]=new float[n];


ppB=new float*[n];
for(  i=0;i<=n-1;i++)
ppB[i]=new float[q];

ppC=new float*[m];
for(  i=0;i<=m-1;i++)
ppC[i]=new float[q];

///////////Reading First Matrix ///////////
cout<<"Enter the first matrix elements\n";
for(int j=0;j<=m-1;j++)
for(int k=0;k<=n-1;k++)
cin>>ppA[j][k];


///////////Reading Second Matrix ///////////
cout<<"Enter the second matrix elements\n";
for( j=0;j<=n-1;j++)
for(int k=0;k<=q-1;k++)
cin>>ppB[j][k];

///////////Initializing the prodcut matrix ///////////
for( j=0;j<=m-1;j++)
for(int k=0;k<=q-1;k++)
ppC[j][k]=0;



for(i=0;i<=m-1;i++)
for( j=0;j<=q-1;j++)
for( int k=0;k<=n-1;k++)
ppC[i][j]+=ppA[i][k]* ppB[k][j];


///////////Printing the Product Matrix ///////////
cout<<"The multiplication result=\n";
for( j=0;j<=m-1;j++)
{for( int k=0;k<=q-1;k++)
cout<<ppC[j][k]<<" ";
cout<<endl;
}


return 0;
}







