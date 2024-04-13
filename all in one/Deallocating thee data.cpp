#include<iostream>
using namespace std;

int main()
{
 	int n;
 	cin>>n;
 	int *p=new int[n];
 	try
 	{
	 for(int i=0;i<n;i++)
	 cin>>p[i];
	 throw -1;
	}
	catch(int n)
	{
		cout<<"Deallocating mmemory before terminating";
		delete[]p;
	}
}