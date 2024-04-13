#include<iostream>
using namespace std;
class employee{
	char name[50];
	int age;
	public:
		void getdata(void);
		void putdata(void);
};
void employee::getdata(void)
{
	cout<<"Enter the name of the employee:";
	cin>>name;
	cout<<"Enter the age of the employee:";
	cin>>age;
}
void employee::putdata(void)
{
	cout<<"Entered name is:"<<name;
	cout<<"Entered age is:"<<age;
}
const int size=3;
int main()
{
	employee emp[size];
	int i;
	for(i=0;i<3;i++)
	{
		cout<<"Enter the details of the employee number"<<i+1;
		emp[i].getdata();
	}
	for(i=0;i<3;i++)
	{
		cout<<"Details of the employee number"<<i+1;
		emp[i].putdata();
	}
	return 0;
}
