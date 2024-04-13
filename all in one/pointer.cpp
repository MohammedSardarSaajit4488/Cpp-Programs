//creating pointer
#include<iostream>
using namespace std;

void example(int n){
	cout<<"Entered value is "<<n;
}
int main(){
void(*ptr)(int)=&example;
(*ptr)(5);
}
