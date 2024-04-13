/*null pointer demonstration*/
#include <iostream>
using namespace std;
int main
{
    int *p = &a;
    p = 0;
    cout << p;
}
