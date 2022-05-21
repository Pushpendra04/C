#include<iostream>
using namespace std;
int main()
{
	int d,n,k,a[d][d],i,j;
 	cout<<"enter the size";
     cin>>d;
	cout<<"enter the rows and column"<<endl;
	cin>>n>>k;
	cout<<"enter the array"<<endl;
	for(i=0;i<n;i++)
	{
	for(j=0;j<k;j++)
	{
		cin>>a[i][j];
	}
    }
	for(i=0;i<n;i++)
	{
		for(j=0;j<k;j++)
		{
		
		cout<<a[i][j]<<"\t";
		
		}
		cout<<endl;
	}
	
	
}
