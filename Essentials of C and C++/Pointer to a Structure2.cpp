//Creating the variable of the type structure in the heap memory
#include<iostream>
#include<stdlib.h>
using namespace std;
struct Rectangle{
	int length;
	int breadh;
};
int main(){
	int area;
	struct Rectangle *p;
	p=(struct Rectangle *)malloc(sizeof(struct Rectangle));
	p->length=6;
	p->breadh=12;
	area=p->length*p->breadh;
	cout<<"The area of the rectangle is:="<<area<<endl;
	return 0;
}
