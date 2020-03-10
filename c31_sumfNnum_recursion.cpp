#include <iostream>
using namespace std;
int sum (int x)
{
	if (x != 1)
	{
		return x + sum(x -1);
	}
	else
		return 1;
}
int main()
{
	int n;
	cout << "\n SUM OF NUMBERS ";
	cout << "\n Enter the number of numbers - ";
	cin >> n;
	cout << "\n \n Sum of all numbers entered = " << sum(n);
	return 0;
}
