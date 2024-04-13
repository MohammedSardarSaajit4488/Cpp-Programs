#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream outfile;
	outfile.open("Exp0.txt",ios::app);
	string s;
	getline(cin,s);
	outfile<<s;
	outfile.close();
}
