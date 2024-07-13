#include <bits/stdc++.h>
using namespace std;
class Shape
{
protected:
	float Area;

public:
	virtual float getArea(int i)
	{
		cout << "No Specific Detail!!";
		return 0.;
	}
};
class Square : public Shape
{
public:
	float getArea(int side)
	{
		Area = side * side;
		return Area;
	}
};
class Circle : public Shape{
	public:
	float getArea(int radius)
	{
		Area = 44. * radius /7;
		return Area;
	}
};
int main(){
	Shape *s= new Square();
	cout<<s->getArea(7)<<endl;
	s=new Circle();
	cout<<s->getArea(10)<<endl;

}