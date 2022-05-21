#include<iostream>
using namespace std;
int main()
{
	long long int n,i,fact=1;
	cout<<"enter any no";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
		
	}
	cout<<fact;
	
}
