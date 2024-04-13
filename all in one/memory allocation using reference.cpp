#include<iostream>
using namespace std;

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
	Student &r=*(new Student);
	r.name="jiddy";
	r.age=19;
	cout<<r.name<<r.age;
}
