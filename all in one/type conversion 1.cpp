#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Time{
	public:
		int hour;
		int minute;
		int second;
		
		void input()
		{
			cin>>hour>>minute>>second;
		}
		operator int()
		{
			int s=(hour*3600)+(minute*60)+second;
			return s;
		}
		void display()
		{
			cout<<"Before conversion: ";
			cout<<hour<<" "<<minute<<" "<<second<<endl;
			cout<<"After conversion: ";
			cout<<hour<<":"<<minute<<":"<<second<<endl;
		}
};
int main()
{
 	Time t1;
 	t1.input();
 	t1.display();
 	cout<<t1.operator int();
}
