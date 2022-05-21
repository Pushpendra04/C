#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a,b,c,i,n;
	cout<<"how much time you run";
	cin>>n;
	for(i=1;i<=n;i++)
	{
	
	cout<< "enter any two no";
	cin>>a>>b;
	cout<<"1.add\n""2.subtract\n""3.multiply\n""4.divide\n""5.exit"<<endl;
	cout<<"enter your choice ";
	cin>>c;

	switch(c)
	
	{
		case 1 : cout<<a+b<<endl;
		break;
		
		case 2 : cout<<a-b<<endl;
		break;
		 
		 case 3 : cout<<a*b<<endl;
		 break;
		 
		 case 4 : cout<<a/b<<endl;
		 break;
		 
		 
		 case 5 : exit(0);
		 
	}
	
		  
	}
	
}
