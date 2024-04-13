#include <fstream>
#include <iostream>
using namespace std;

int main(){
string name;
int roll_no;
int age;
float marks;

ifstream infile;
infile.open("student.txt");

int n;
cin>>n;

for(int i=0;i<n;i++)
{
infile>>name>>roll_no>>age>>marks;
cout<<name<<" "<<roll_no<<" "<<age<<" "<<marks<<"\n";
}
infile.close();

return 0;
}
