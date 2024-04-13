#include<iostream>
#include<fstream>
#include<sstream>
using namespace std;
int main()
{
	stringstream s;
	string input;
	for(int i=0;i<10l;i++)
	{
		getline(cin,input);
		s<<input<<"\n";
	}
	string output;
	s>>output;
	cout<<output;
	s>>output;
	cout<<output;
	s>>output;
	cout<<output;
	s>>output;
	cout<<output;
	return 0;
}
