#include<iostream>
using namespace std;
class Rectangle
{
	public:
		int length;
		int width;
		void setDimenions();
		int area();
		int perimeter();
};
void Rectangle::setDimenions()
{
	cout<<"Enter length:";
	cin>>length;
	cout<<"Enter width:";
	cin>>width;
}
int Rectangle::area()
{
	return length*width;
}
int Rectangle::perimeter()
{
	return 2*(length*width);
}
int main()
{
	Rectangle r;
	r.setDimenions();
	cout<<"Area:"<<r.area()<<endl;
	cout<<"perimeter:"<<r.perimeter()<<endl;
	return 0;
}