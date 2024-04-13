#include <fstream>
#include <iostream>
using namespace std;

int main(){
ifstream infile;
infile.open("integers.txt");
int n;
cin>>n;
int m;

for(int i=0;i<n;i++)
{
infile>>m;
cout<<m<<" ";
}
infile.close();
return 0;
}
