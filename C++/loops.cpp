#include<iostream>
using namespace std;
int main()
{
	int a,n,i=1;

	cout<<"enter how many you run"<<endl;
	cin>>n;
	do
	{
		cout<<"enter any no";
		cin>>a;
		if(a%2==0)
		cout<<"no is even"<<endl;
		else
		cout<<"no is odd"<<endl;
			
		i++;
	}
	while(i<=n);
	
}
