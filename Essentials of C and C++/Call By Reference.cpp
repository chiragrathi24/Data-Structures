#include<iostream>
using namespace std;
void swap(int &a,int &b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}
int main(){
	int x,y;
	x=6;
	y=12;
	swap(x,y);
	cout<<"The value of x and y after the swapping is:="<<x<<","<<y<<endl;
	return 0;
}
