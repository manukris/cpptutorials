#include <iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout << "Enter three numbers \n";
	cout << "\n num 1 - ";
	cin >> a;
	cout << "\n num 2 - ";
	cin >> b;
	cout << "\n num 3 - ";
	cin >> c;
	if(a > b)
	{
		if(a > c)
		{
			cout << "\n the biggest number is " << a;
		}
		else
		{
			cout <<"\n the biggest number is " << c;
		}
	}
	else
	{
		if(b > c )
		{
			cout << "\n the biggest number is " << b;
		}
		else
		{
			cout <<"\n the biggest number is " << c;
		}
	}
	return 0;
}
