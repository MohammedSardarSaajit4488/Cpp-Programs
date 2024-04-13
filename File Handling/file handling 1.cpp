#include <fstream>
#include <iostream>
using namespace std;

int main(){
ifstream infile;
infile.open("integers.txt");

int m;

infile>>m;
cout<<m<<" ";

infile>>m;
cout<<m<<" ";

infile>>m;
cout<<m;





return 0;
}
