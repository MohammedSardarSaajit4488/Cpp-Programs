#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s1="Mohammed";
	string s2=" Sardar ";
	string s3="Saajit69";
	string s4=" jiddy";
	s1.insert(8,s2);
	s3.erase(6,7);
	s4.append(s4,6,7);
	//s3.replace(s3);
	cout<<s1<<s3<<s4<<endl;
	return 0;
}
