#include<iostream>
#include<stdexcept>
using namespace std;

float division(int n,int d)
{
	if(d==0)
	throw runtime_error("division by '0' is giving an error");
	return n/(float)(d);
}

int main()
{
 	int n,d;
 	cin>>n>>d;
 	try
 	{
 		float result=division(n,d);
 		cout<<result;
	 }
	 catch(runtime_error &e)
	 {
	 	cout<<"Excention occured : "<<e.what();
	 }
}
