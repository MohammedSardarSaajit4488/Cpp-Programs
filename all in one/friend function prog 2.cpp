#include<iostream>
using namespace std;

class A
{
	int a,b;
	friend class B;
};
class B
{
	public:
		void getValue(A &a)
		{
			int c,d;
			cin>>c;
			cin>>d;
			a.a=c;
			a.b=d;	
		}
		void printValue(A &a)
		{
			cout<<a.a<<" "<<a.b;
		}
};
int main()
{
	A a;
	B b;
	b.getValue(a);
	b.printValue(a);
	return 0;
}
