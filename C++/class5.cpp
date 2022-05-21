#include<iostream>
using namespace std;
class student
{
	int x;
	static int y;
	public:
	const int z;
	
		void getdata()
		{
			
			cout<<"enter the data";
			cin>>x;
			
		}
		void display()const
		{
			cout<<x<<y;
		}
	
};
int student::y=30;
//int student::z=20;
int main()
{
	student S1
	const int student::z;
	S1.getdata();
	S1.display();
}
