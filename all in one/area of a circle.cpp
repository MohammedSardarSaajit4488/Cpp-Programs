// Area of a circle
#include<iostream>
using namespace std;
class Circle{
public:
 int radius;
 float compute_area()
 {
 	radius=1;
 	return 3.14*radius*radius;
 }
 };
int main()
{
	Circle obj;
	cout<<"Area is:"<<obj.compute_area();
	return 0;
}

