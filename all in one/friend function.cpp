// to access the private data members of the member functions
#include<iostream>
using namespace std;

class xyz{
	int a;
	
	friend void setValue(xyz &x);
	friend void display(xyz &x);
};
void setValue(xyz &x){
	cin>>x.a;
}

void display(xyz &x){
	cout<<x.a;
}

int main(){
	xyz x;
	setValue(x);
	display(x);
}
