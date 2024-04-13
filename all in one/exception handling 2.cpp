#include <bits/stdc++.h>
using namespace std;

int main()
{
int x;
cin>>x;
char a;
cin>>a;
try{
if(x<0)
{
throw x;
cout<<"after throw "<<endl;
}
else
cout<<x<<endl;
if(a=='z')
{
throw a;
}
}
catch(int x)
{
cout<<"exception caught for x < 0"<<endl;
}
catch(char a)
{
cout<<"exception caught for character 'z'"<<endl;
}
catch(float f)
{
cout<<"float exception"<<endl;
}
}