#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
class Employee
{
	int id;
	float salary;
	public:
	void input()
	{
		cout<<"\nEnter id:";
		cin>>id;
		cout<<"\n Enter salary:";
		cin>>salary;
	}
	void display()
	{
		cout<<"\n"<<id<<" "<<salary;
		
	}
};
int main()
{
	int n;
	cout<<"\n Enter number of employees:";
	cin>>n;
	Employee *p=new Employee[n];
	Employee *d=p;
	for(int i=0;i<n;i++)
	{
		p->input();
		p++;
	}
	for(int i=0;i<n;i++)
	{
		d->display();
		d++;
	}
}