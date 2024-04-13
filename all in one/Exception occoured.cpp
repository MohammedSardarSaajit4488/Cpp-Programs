#include<iostream>
using namespace std;

class exp
{
	A()
	{
		con>>a>>b>>c;
	}
	~A()
	{
		cout<<"Object is destoryed"<<endl;
	}
};

int main()
{
 	try
 	{
 		A a1,a2;
 		throw -1;
	}
	catch(int  i)
	{
		cout<<"Exception occoured"<<endl;
	}
}