// basically this method is for minimizing the space.
#include<iostream>
using namespace std;

class Abc
{
	public:
	static int a;
	int b;
};

int Abc::a;  // we r allocating the memory

int main()
{
	Abc s1, s2, s3;
	Abc::a = 2;
	s1.b = 3;
	s2.b = 5;
	s3.b = 7;
	cout << Abc::a << " " << s1.b;
	return 0;
}

