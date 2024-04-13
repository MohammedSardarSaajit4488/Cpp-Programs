#include<iostream>

using namespace std;

class Student{

string name;
int rollno;
int age;
float marks;

public:

void inputStudentInfo(string,int,int,float);
void displaystudentInfo();
};

void Student:: inputStudentInfo(string s,int r, int a,float m)
{
name=s;
rollno=r;
age=a;
marks=m;
}

void Student:: displaystudentInfo()
{
cout<<"The Student is:-"<<name<<endl;
cout<<"The Roll no is:-"<<rollno<<endl;
cout<<"The age is:-"<<age<<endl;
cout<<"The marks are:-"<<marks<<endl;
}

int main()
{
Student student1[100];
int n;
cin>>n;

string name;
int age;
int rollno;
float marks;

for(int i=0;i<n;i++)
{
cin>>name>>rollno>>age>>marks;
student1[i].inputStudentInfo(name,rollno,age,marks)
}

for(int i=0;i<n;i++)
{
student1[i].displaystudentInfo();
}

return 0;

}
