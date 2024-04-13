#include<iostream>
using namespace std;
class customer{
	string name;
	long contact;
	float amount;
	
	public:
		void getInfo(float a){
			name="Customer";
			contact=0;
			amount=a;
		}
		
		void getInfo(string n,float a){
			name=n;
			contact=0;
			amount=a;
		}
		
		void getInfo(string n, long no,float a){
			name=n;
			contact=no;
			amount=a;
		}
		
		void display(){
			cout<<name<<" "<<contact<<" "<<amount<<endl;
		}
};

int main()
{
	customer &c1=*(new customer);
	customer &c2=*(new customer);
	c1.getInfo(10.5);
	c2.getInfo("saajit",569461,1646.156);
	//c2.getInfo("saajit",55646.26496);
	c1.display();
	c2.display();
}

