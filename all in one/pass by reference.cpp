//dynamic memory allocation....

#include<iostream>
using namespace std;

int main()
{
	int *p;
	int a=5;
	//p=&a;        // &- address
	//cout<<*p;    // *-pointer
	int&r=a;       //  reference
	cout<<&r;
}
