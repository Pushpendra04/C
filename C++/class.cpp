#include<iostream>
using namespace std;
class A
{
	int x;
	static int y;
	public:
		void getdata()
		{
			int n;
			cout<<"enter the data";
			cin>>x;
		}
		void display()
		{
			cout<<x<<"\t"<<y<<endl;
		}
};
int A::y=20;;
int main()
{
	A a1;
	a1.getdata();
	a1.display();
	
}
