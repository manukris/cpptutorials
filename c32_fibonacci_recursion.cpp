#include <iostream>
using namespace std;
int fib (int x)
{
	if(x == 1 || x == 0)
	{
		return x;
	}
	else
	{
		return fib(x - 1) + fib(x - 2);
	}
}
int main()
{
	int n;
	cout << "FIBONACCI SERIES ( RECURSION) ";
	cout << "\n Enter length of the series - ";
	cin >> n;
	cout << "\n Fibonacci series - \n";
	for (int i = 0; i < n ; i ++)
	{
		cout << fib(i) << "  ";
	}
	return 0;
}
