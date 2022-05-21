#include<iostream>
using namespace std;
class emp
{
	int salary=0;
	char name[20];
	public:
	void getdata()
		{
		
		cout<<"enter the salary";
		cin>>salary;
		cout<<"enter the name";
		cin>>name;
	}
		
		void answer()
		{
		
		try
	{
		if(salary<=5000)
		throw(salary);
		else
		cout<<salary<<"is a good salary";
			}
			catch(int d)
			{
			
			cout<<"your salary is low ="<<d;
		}
	}
};
int main()
{
	emp a;
	a.getdata();
	a.answer();
	return 0;
}
