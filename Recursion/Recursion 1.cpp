#include<iostream>
using namespace std;
void fun1(int n){	//Print the numbers in the descending order recursively
	if(n>0){
		cout<<n<<endl;
		fun1(n-1);
	}
}

void fun2(int n){	//Printing the numbers in the ascending order recursively
	if(n>0){
		fun2(n-1);
		cout<<n<<endl;
	}
}

int main(){
	int x=6;
	cout<<"This is the function-1"<<endl;
	fun1(x);
	cout<<"This is the function 2:"<<endl;
	fun2(x);
	return 0;
}
