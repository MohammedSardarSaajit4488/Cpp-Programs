#include<iostream>
using namespace std;
class arthimatic
{
	int x,y;
	public:
		void getdata()
		{
			cout<<"Enter the value of x and y:"<<endl;
			cin>>x>>y;
		}
		void sum()
		{
			int z;
			z=x+y;
			cout<<"Sum is:"<<z;
		}
		void divide()
		{
			int z;
			z=x/y;
			cout<<" Division is:"<<z;
		}
		void multiply()
		{
			int z=x*y;
			cout<<" Multiplication is:"<<z;
		}
		void substract()
		{
			int z=x-y;
			cout<<" Substraction is:"<<z;
		}
};
int main()
{
	arthimatic obj1;
	obj1.getdata();
	obj1.sum();
	obj1.substract();
	obj1.multiply();
	obj1.divide();
}
