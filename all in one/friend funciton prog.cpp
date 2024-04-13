#include<iostream>

using namespace std;

class Student{

string name;
int rollno;
int age;
float marks;

public:

void input(string n,int r,int a,float m)
{
name=n;
rollno=r;
age=a;
marks=m;
}

void display()
{
cout<<name<<" "<<rollno<<" "<<age<<" "<<marks<<endl;
}

friend float average(Student s[],int n);
};

float average(Student s[],int n)
{
float sum=0.0;
for(int i=0;i<n;i++)
sum=sum+s[i].marks;

return (sum/n);
}

int main()
{
Student student[100];
int n;

cin>>n;

string name;
int r,a;
float m;

for(int i=0;i<n;i++)
{
cin>>name>>r>>a>>m;
student[i].input(name,r,a,m);
}

for(int i=0;i<n;i++)
{
student[i].display();
}

cout<<"The average marks are "<<average(student,n);

return 0;

}
