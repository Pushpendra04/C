#include<iostream>
using namespace std;
int main()
{
int i,j,r,c,a[10][10];
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
		cout<<a[i][j]<<"\t";
	}
	cout<<endl;
}
}
