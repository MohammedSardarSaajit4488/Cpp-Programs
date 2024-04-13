#include<iostream>
using namespace std;

class except
{
	public:
		void input()
		{
			cout<<"Enter the value of x: ";
			cin>>x;
		}
		try
		{
			if(x<0)
			{
				throw x;
				cout<<"Trying to print ";
			}
		}
		catch(int x)
		{
			cout<<"Exception caught ";
		}
};
int main()
{
 	except ex1;
 	ex1.input();
 	ex1.display(); 	
}