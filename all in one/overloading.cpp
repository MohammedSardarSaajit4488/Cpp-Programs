#include<bits/stdc++.h>
using namespace std;

class student
{
	public:
	string name;
	int reg;
	char sec;
	int sem;
	void input()
	{
		cin>>name>>reg>>sec>>sem;
	}
	void display()
	{
		cout<<"name of student: ";
		cout<<name;
		cout<<"Registeration: ";
		cout<<reg;
		cout<<"section: ";
		cout<<sec;
		cout<<"semester: ";
		cout<<sem;
	}
	operator string()
	{
		return name;
	}
};
int main()
{
 	student s1;
 	s1.input();
 	s1.display();
 	cout<<s1.operator string();
 	string n=s1;
 	cout<<n;
}
