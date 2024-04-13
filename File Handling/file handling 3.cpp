#include <fstream>
#include <iostream>
using namespace std;

int main(){
ofstream outfile;
outfile.open("integers.txt");
int n;
cin>>n;

for(int i=0;i<n;i++)
{
int m;
cin>>m;
outfile<<m<<" ";
}
outfile.close();

return 0;
}
