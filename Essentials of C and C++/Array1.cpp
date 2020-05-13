#include<iostream>
using namespace std;
int main()
{
	int A[6];
	cout<<"Enter the numbers of an array:"<<endl;
	for(int i=0;i<6;i++)
	{
		cin>>A[i];
	}
	cout<<"The numbers of an array are:"<<endl;
	for(int i=0;i<6;i++)
	{
		cout<<A[i]<<endl;
	}
	return 0;
}
