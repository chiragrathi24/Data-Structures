#include<iostream>
using namespace std;
void swap(int a, int b){
	int temp;
	temp=a;
	a=b;
	b=temp;
}
int main(){
	int x=6, y=12;
	swap(x,y);
	cout<<"The values after the swaping are unchanged:="<<x<<","<<y<<endl;
	return 0;
}
