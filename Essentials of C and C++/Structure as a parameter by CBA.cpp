//Structure as a paramter by Call By Address
#include<iostream>
using namespace std;
struct Rectangle{
	int length;
	int breadth;
};
void ChangeLength(struct Rectangle *p,int l){
	p->breadth=l;
}
int main(){
	struct Rectangle r1={6,18};
	ChangeLength(&r1,12);
	cout<<"The length and the breadth of the rectangle are:="<<r1.length<<","<<r1.breadth<<endl;
	return 0;
}
