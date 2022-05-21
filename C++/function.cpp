#include<iostream>
using namespace std;
int change(int a)
{
	if(a>=97&&a<=122)
	return a-32;
	else
	return a;
}
int  main()
{
	
	char a,d;
	cout<<"enter the  character";
	cin>>a;
	d=change(a);
	cout<<d;
}

