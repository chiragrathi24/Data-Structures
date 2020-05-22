#include<iostream>
#include<string.h>
using namespace std;
int main(){
	string str="Hello hii!!";
	//Using the string size function
	cout<<str.size()<<endl;
	//Using the String length function
	cout<<str.length()<<endl;
	//Using the strlen function
	cout<<strlen(str.c_str())<<endl;
	//Using the while loop
	int i=0;
	while(str[i]){
		i++;
	}
	cout<<i<<endl;
	//Using the for loop
	for(i=0;i<str[i];i++)
	;
	cout<<i<<endl;
	return 0;
}
