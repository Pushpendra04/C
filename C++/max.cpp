#include<iostream>
using namespace std;
int main()
{
	int a,b,c,m,sm;
	cout<<"enter three no";
	cin>>a>>b>>c;
	if(a>b)
	{
		m=a;
		sm=b;
	}
	if(b>a)
	{
		m=b;
		sm=a;
	}
	 if(c>m)
	{
	sm=m;
	m=c;
}
if(c>sm)
sm=c;

cout<<m<<"is max"<<endl;
cout<<sm<<"is smax";
}
