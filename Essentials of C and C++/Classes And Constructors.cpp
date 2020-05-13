#include<iostream>
using namespace std;
class Rectangle{
	private:
	int length;
	int breadth;
	public:
		Rectangle(int l, int b)//Here the rectangle is a constructor
		{
			length=l;
			breadth=b;
		}
		int area(){
			return (length*breadth);
		}
		void ChangeLength(int l){
			length=l;
		}
};
int main(){
	Rectangle r(18,12);
	r.area();
	r.ChangeLength(6);
	cout<<"The area of the rectangle is:="<<r.area()<<endl;
	return 0;
}SS
