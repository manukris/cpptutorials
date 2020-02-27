#include <iostream>
using namespace std;
int main()
{
	int a;
	cout << "Enter an year \n ";
	cin >> a;
	if(a % 4 == 0)
	{
		if(a % 100 ==0)
		{
			if(a % 400 == 0)
			{
				cout << "\n It's a leap year" ;
			}
			else
			{
				cout << "\n It's not a leap year";
			}
		}
		else
		{
			cout << "It's a leap year";
		}
	}
	else
	{
		cout << "\n It's not a leap year ";
	}
	return 0;
}
