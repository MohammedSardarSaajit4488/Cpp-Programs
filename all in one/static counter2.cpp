//static data mambers
#include <iostream>
using namespace std;

class Student{
static int counter;
string name;
int age;
public:
void getValue(string,int);
void display();
void count();
static void printcount()
{
cout<<counter;
}
};
int Student::counter=0;

void Student::getValue(string n,int a)
{
name=n;
age=a;
}

void Student::display()
{
cout<<"Name "<<name<<" "<<"Age "<<age<<endl;
}

void Student::count()
{
counter++;
}

int main()
{
Student s1,s2,s3;
s1.getValue("rahul",24);
s1.count();
s2.getValue("alex",24);
s2.count();
s3.getValue("richy",24);
s3.count();

Student::printcount();
return 0;
}
