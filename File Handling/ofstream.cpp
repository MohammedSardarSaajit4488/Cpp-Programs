#inlucde<fstream>
#include<iostream>
using namespace std;

int main()
{
	string s;
	ofstream outfile;			//object of of stream class
	outfile.open("exp2.txt");   //outfile is a object and open is funcStion of ofstream class
	cin >> s;
	outfile << s;
return 0;
}
