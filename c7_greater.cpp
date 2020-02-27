#include <iostream>
using namespace std;
int main ()
{
	int a,b;
	cout << "enter two numbers \n";
	cout <<"\nnum 1 = ";
	cin >> a;
	cout << "\n num 2 = ";
	cin >> b;
	// method 1
	int big = (a > b) ? a : b;
	cout << "\n" << big << " is the biggest";
	// method 2
	if (a > b)
	{
		cout << "\n" << a << " is the greatest";
	}
	else
	{
		cout << "\n" << b << " is the greatest";
	}
	return 0;
}
