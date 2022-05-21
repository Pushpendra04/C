#include<iostream>
using namespace std;
int main()
{
	int i,j,l,n;
	cout<<"enter the no";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(l=1;l=n-i;l++)
		cout<<" ";
		for(j=1;j<=i;j++)
		{
    	cout<<j;
    	}
		cout<<endl;
	}
}
