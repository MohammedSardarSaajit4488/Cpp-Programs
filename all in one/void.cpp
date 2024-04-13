#include<iostream>
using namespace std;
void example(int a, int b=5, int c=6)
{
	cout<<a<<" "<<c;
}
int main()
{
	example(7,5);
}
