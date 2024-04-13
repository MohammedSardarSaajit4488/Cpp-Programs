#include<iostream>
#include<iomanip>  //input output manipulation
using namespace std;
int main()
{
	double d;
	cin>>d;
	
	cout<<fixed<<setprecision(2)<<d;  // to print till 2 digits
	return 0;
}
