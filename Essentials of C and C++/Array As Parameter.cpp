#include<iostream>
using namespace std;
void fun(int A[6], int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<A[i];
	}
}
int main()
{
	int A[6]={1,2,3,4,5,6};
	fun(A,6);
	return 0;
}
