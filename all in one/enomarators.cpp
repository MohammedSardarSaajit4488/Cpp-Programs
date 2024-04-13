#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Enter the number of love: ";
	cin>>n;
	enum chars{nobita,shijuka,giyan,sunio,dekisuki};
	chars like,hate,friends;
	like=shijuka;
	hate=dekisuki;
	friends=giyan;
	if(n==1)
	{
		cout<<"Nobita likes shijuka";
	}
	else if(n==2)
	{
		cout<<"nobita hates deki suki";
	}
	else
	{
		cout<<"giyan and sunio are nobita friends";
	}
}
