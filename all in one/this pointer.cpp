#include<iostream>
using namespace std;

class student
{
	string name;
	int rollno;
	int age;
	float marks;
	
	public:
		void input(string name, int rollno,int age,float marks)
		{
			this->name=name;
			this->rollno=rollno;
			this->age=age;
			this->marks=marks;
		}
		void display()
		{
			cout<<name<<endl<<rollno<<endl<<age<<endl<<marks<<endl;
		}
};

int main()
{
	student s;
	s.input("TUF",5000,3365,95.9);
	s.display();
}
