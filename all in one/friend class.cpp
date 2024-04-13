// friend class to access the other private classes
#include<iostream>
using namespace std;
class exp{
	int a;
	void input(int a)
	{
		this->a=a;
	}
	void display()
	{
		cout<<a;
	}
	
	friend class friendexp;
};
class friendexp
{
	public:
		void input(exp &e)
		{
			int n;
			cin>>n;
			e.input(n);
		}
		void display(exp &e)
		{
			e.display();
		}
};

int main()
{
	exp e;
	friendexp f;
	f.input(e);
	f.display(e);
	
	return 0;
}
