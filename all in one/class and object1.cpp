#include<iostream>
#include<iomanip>
using namespace std;
class Student			//defined class
{
		string name;				//data mmembers
		int age;
		int rollno;
		float marks;
		
		public:								//defined functions
		void inputStudentInfo(string s,int r, int a,float m);
		void displayStudentInfo();
};
void Student::inputStudentInfo(string s,int r,int a,float m)	// :: - scope operator
{
	name=s;					// "this->" is used to asign the same operator and data.
	age=r;
	rollno=a;
	marks=m;
}
void Student::displayStudentInfo()
{
	cout<<"The student name is:"<<name<<endl;
	cout<<"The student age is:"<<age<<endl;
	cout<<"The student rollno is:"<<rollno<<endl;
	cout<<"The student marks are:"<<marks<<endl;
}
int main()
{
	Student student1;
	string name;
	int age;
	int rollno;
	float marks;
	
	cin>>name>>age>>rollno>>marks;
	student1.inputStudentInfo(name,age,rollno,marks);
	student1.displayStudentInfo();
	
	return 0;
}
