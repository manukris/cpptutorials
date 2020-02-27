#include <iostream>
using namespace std;
int main()
{
	int n, r = 1, s = 0;
	cout << "SUM OF DIGITS OF THE NUMBER ";
	cout << "\n Enter a number ";
	cin >> n;
	for(int i = 1; n != 0; i++)
	{
		r = n % 10 ;
		n = n / 10;
		s= s + r;
	}
	cout << "\n The sum of the digits of the number is  " << s;
	return 0;
}
