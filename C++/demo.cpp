#include<iostream>
using namespace std;
int main()
{
	int a,b,c,max,smax;
	cout<<" enter three no"<<endl;
	cin>>a>>b>>c;
	if(a>b)
	{
		max=a;
		smax=b;
	
	}
	else 
	{
		max=b;
		smax=a;
		cout<<max<<smax<<endl;
	}
	if(c>max)
	
	{
		smax=max;
		max=c;
		
	}
	
	
	else if(c>smax)
	
		smax=c;
		 
	

	cout<<max<<"is max"<<endl;
	cout<<smax<<"is smax"<<endl;
	
		}
