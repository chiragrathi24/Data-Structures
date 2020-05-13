#include<iostream>
using namespace std;
void swap(int *a, int *b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
int main(){
	int x=6;
	int y=12;
	swap(x,y);
	cout<<"The swaped numbers are:="<<x<<","<<y<<endl;
	return 0;
}
