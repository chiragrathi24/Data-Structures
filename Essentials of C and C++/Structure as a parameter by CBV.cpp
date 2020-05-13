//Structure as a paramter by Call By Value
#include<iostream>
using namespace std;
struct Rectangle{
	int length;
	int breadth;
};
int area(struct Rectangle r1){
	return(r1.length*r1.breadth);
}
int main(){
	struct Rectangle r1;
	r1.length=6;
	r1.breadth=12;
	cout<<"The area of the rectangle is:="<<area(r1);
	return 0;
}
