#include<iostream>
using namespace std;
int add(int a, int b){
	int c;
	c=a+b;
	return (c);
}
int main(int x, int y){
	int z;
	x=6;
	y=12;
	z=add(x,y);
	cout<<"The sum of the two numbers is:="<<z<<endl;
	return 0;
}
