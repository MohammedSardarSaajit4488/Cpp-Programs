//dynamin memory allocation with using pointer
#include<iostream>
using namespace std;
class Student
{
	public:
	string name;
	int age;
};

int main()
{
	Student *S;     //creating our own pointer besides using  "this" pointer
	S=new Student;
	S->name="jiddy ";
	S->age=19 ;
	cout<<"Name: "<<S->name<<"Age: "<<S->age;
	delete S;		//deleting the memory used by the code 
}
