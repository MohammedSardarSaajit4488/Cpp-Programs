#include<iostream>
using namespace std;

class Student
{
	int a;
	int b;
	int c;
	void setValue(int p, int q, int r)
	{
		a=p;
		b=q;
		c=r;
	}
	void display()
	{
		cout<<a<<" "<<b<<" "<<c;
	}
};
int main()
{
	Student student1;
	int a,b,c;
	cin>>a>>b>>c;
	student1.setValue(a,b,c);
	return 0;
}
