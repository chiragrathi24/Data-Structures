#include<iostream>
using namespace std;
int main(){
	int n;
	int A[n];
	cout<<"Enter the size of an array:"<<endl;
	cin>>n;
	cout<<"Enter the elements of an array:"<<endl;
	for(int i=0;i<n;i++){
		cin>>A[i];
	}
	cout<<"The entered elements of an array are:"<<endl;
	for(int i=0;i<n;i++){
		cout<<A[i]<<endl;
	}
	return 0;
}
