#include <iostream>
using namespace std;
int power(int p, int q)
{
	if ( q == 0)
	{
		return 1;
	}
	else
	{
		return p * power(p, q - 1);
	}
}
int main()
{
	int b, e;
	cout <<"POWER CALCULATION";
	cout << "\n Enter base value - ";
	cin >> b;
	cout << "\n enter exponent value - ";
	cin >> e;
	cout <<"\n Power = " << power(b, e);
	return 0;
}
