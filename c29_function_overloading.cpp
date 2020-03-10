#include <iostream>
using namespace std;
float area(float &l)
{
	float area = 3.14 * l * l ;
	return area;
}
void area(int &l)
{
	int area = 4 * l;
	cout << "\n area of the square is " << area;
}
void area (int &l, int &b)
{
	int s = l * b;
	cout << "\n Area of the rectangle is  " << s;
}
int main()
{
	int sq, le, br;
	float r;
	cout << " AREA CALCULATION";
	cout << "\n Enter the radius of the circle - ";
	cin >> r;
	cout<<"Area of circle == "<<area(r);
	cout << "\n Enter length of the square - ";
	cin >> sq;
	area(sq);
	cout << "\n enter the length of the rectangle - ";
	cin >> le;
	cout << "\n enter the breadth of the rectangle - ";
	cin >> br;
	area(le, br);
	return 0;
}
