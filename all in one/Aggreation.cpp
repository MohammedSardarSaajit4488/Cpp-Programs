#include<iostream>
using namespace std;

class address
{
	public:
		int h_no;
		string street;
		string Area;
		
};

class Emp
{
	public:
		string name;
		int id;
		address address;  // object of address class
		
		void input()
		{
			cout<<"Enter emp name: ";
			cin>>name;
			cout<<"Enter emp id: ";
			cin>>id;
			cout<<"Enter emp house number: ";
			cin>>address.h_no;
			cout<<"Enter emp street: ";
			cin>>address.street;
			cout<<"Enter emp Area: ";
			cin>>address.Area;
		}
		void printaddress()
		{
			cout<<"Address: "<<address.h_no<<","<<address.street<<","<<address.Area<<endl;
		}
};
int main()
{
	Emp e1;
	e1.input();
	e1.printaddress();
	
}