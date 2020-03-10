#include <iostream>
using namespace std;
class Shape
{
	public:
	virtual void area()
	{
		cout << "\n Parent class method ";
	}
};
class Rectangle : public Shape
{
	public:
	void area ()
	{
		cout << "\n Rectangle area";
	}
};
class Circle : public Shape
{
	public:
	void area()
	{
		cout << "\n Circle area";
	}
};
int main()
{
	Shape *s1;
	Rectangle r1;
	s1 = &r1;
	s1->area();
	Circle c1;
	s1 = &c1;
	s1->area();
	return 0;
	
}
