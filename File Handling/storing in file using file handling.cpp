#include <fstream>
#include <iostream>
using namespace std;

int main(){
string name;
int roll_no;
int age;
float marks;

ofstream outfile;
outfile.open("st.txt");

int n;
cout<<"enter the number of students: ";
cin>>n;

for(int i=0;i<=n;i++)
{
cin>>name>>roll_no>>age>>marks;
outfile<<name<<" "<<roll_no<<" "<<age<<" "<<marks<<"\n";
}
outfile.close();

return 0;
}
