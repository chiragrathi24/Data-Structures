#include<iostream>
using namespace std;
struct Rectangle{
	int length;
	int breadth;
};
int main()
{
	int area;
	struct Rectangle r;
	cout<<"Enter the length of the rectangle:"<<endl;
	cin>>r.length;
	cout<<"Enter the breadth of the rectangle:"<<endl;
	cin>>r.breadth;
	area=r.length*r.breadth;
	cout<<"The area of the rectangle="<<area<<endl;
	return 0;
}
