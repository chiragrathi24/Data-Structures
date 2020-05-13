//This is a reference program, this feature only works in the C++ but not in the C language.
#include<iostream>
using namespace std;
int main(){
	int a=12;
	int &r=a;
	cout<<"The value of a is:="<<a<<endl;
	cout<<"The value of a through r is:="<<r<<endl;
	return 0;
}
