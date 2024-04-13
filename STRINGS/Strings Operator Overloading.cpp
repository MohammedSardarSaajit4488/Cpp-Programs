#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s1("man");       // using constructor but works same as below one.
	string s2="beast";		//same as above one
	string s3;
	cout<<"s3"<<s3<<endl;
	
	s3="neither"+s1+"nor";
	//s3+=s2;					//oparator overloading
	cout<<"s3"<<s3<<endl;
	
	s1.swap(s2);
	cout<<"nor"<<s2<<endl;
	return 0;
}
