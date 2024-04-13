#include <iostream>

using namespace std;

class X
{
public:
int a;
void f(int b)
{
cout << "The value of b is "<< b << endl;
}
};
int main()
{
int X::ptiptr = &X::a;
X xobject;
cout << "The value of a is " << xobject.*ptiptr<<
endl;

}
