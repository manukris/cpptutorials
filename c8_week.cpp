#include <iostream>
using namespace std;
int main()
{
	int a;
	cout << "Enter a number to find the respective day of the week\n";
	cin >> a;
	if(a == 1)
	{
		cout << "Monday";
	}
	else if (a == 2)
	{
		cout << "Tuesday";
	}
	else if (a == 3)
	{
		cout << "Wednesday";
	}
	else if (a == 4)
	{
		cout << "Thurday";
	}
	else if (a == 5)
	{
		cout << "Friday";
	}
	else if (a == 6)
	{
		cout << "Saturday";
	}
	else if (a == 7)
	{
		cout << "Sunday";
	}
	else
	{
		cout <<"Invalid Input ";
	}
	return 0;
}
