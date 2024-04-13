//inline function call
#include<iostream>
using namespace std;

inline int increment(int n)
{
	return n++;
}

int main()
{
	int n;
	cin>>n;
	n=increment(n);
	cout<<n;
	return 0;
}
