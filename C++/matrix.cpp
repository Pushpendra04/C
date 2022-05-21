#include<iostream>
using namespace std;
int main()
{
int i,j,r,sum=0,c,a[10][10],b[10][10];
cout<<"enter the row and column"<<endl;
cin>>r>>c;
cout<<"enter the matrix"<<endl;
for(i=0;i<r;i++)
{
	for(j=0;j<c;j++)
	{
		cin>>a[i][j];
	}
}
for(i=0;i<r;i++)
{
	for(j=0;j<c;j++)
	{
//	cout<<a[i][j]<<"\t";
    b[i][j]=a[i][j];
   // cout<<b[i][j]<<"\t";
	}
	cout<<endl;
}


for(i=0;i<r;i++)
{
	sum=0;
	for(j=0;j<c;j++)
	{
	
	
	for(j=0;j<c;j++)
	{
		
		sum=sum+a[i][j];
	}
	cout<<b[i][j]<<"\t"<<sum<<endl;
}
}

for(j=0;j<r;j++)
{
	sum=0;
	for(i=0;i<c;i++)
	{
		
		sum=sum+a[i][j];
	}
	cout<<sum<<endl;
}




}
