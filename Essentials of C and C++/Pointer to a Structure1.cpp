#include<iostream>
using namespace std;
struct Rectangle{
	int length;
	int breadth;
};
int main(){
	int area;
	struct Rectangle r;
	struct Rectangle *p=&r;
	p->length=6;
	p->breadth=12;
	area=r.length*r.breadth;
	cout<<"The area of the rectangle is:="<<area<<endl;
	return 0;
}
