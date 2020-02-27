#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a,b,c,x,r, p,q;
	float x1, x2;
	cout << "Enter values for your quadratic equation";
	cin >> a;
	cin >> b;
	cin >> c;
	p = b * b;
	q = 4 * a * c;
	x = p - q;
	r =  2 * a;
	x1 = (-b + ( sqrt(x)));
	x2 = (-b - ( sqrt(x)));
	cout << "\n the two X values are : ";
	cout <<"\n x1= " << x1 / r;
	cout <<"\n x2 = " << x2 / r;
	return 0;
}

