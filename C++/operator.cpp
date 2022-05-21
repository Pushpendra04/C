#include<iostream>
using namespace std;
class A
{
	int x,y;
public:
	A()
	{
		 x=0;
		y=0;
	}
	void operator ++()
	{
		x=5;
	//	x++;
		y=6;
	//	y++;
	}
	void display()
	{
		cout<<x<<"\t" <<y;
	}
};
	int main()
	{
	A a;
//	a.operator ++();
	++a;
	a.display();
	}
