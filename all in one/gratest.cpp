//find the largest number amoung three
#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter number 1:";
	cin>>a;
	cout<<"ENter number 2:";
	cin>>b;
	cout<<"Enter number 3:";
	cin>>c;
	if(a>b)
	{
		if(a>c)
		cout<<a;
		else
		cout<<b;
}	
else
cout<<c;
}
