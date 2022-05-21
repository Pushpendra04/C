#include<iostream>
using namespace std;
int main()
{
	int i,j,n;
	cout<<"enter the no";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i==n/2||j==n/2||(j==1&&i<n/2)||(i==1&&j>n/2)||(j==n&&i>n/2)||(i==n&&j<n/2))
			cout<<"*";
			else
			cout<<" ";
		}
		cout<<endl;
	}
}
