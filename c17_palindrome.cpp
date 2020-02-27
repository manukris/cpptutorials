#include <iostream>
using namespace std;
int main()
{
	int n, r, s =0, t;
	cout << "PALINDROME OR NOT? ";
	cout << "\n Enter a number ";
	cin >> n;
	t = n;
	while(n !=0)
	{
		r = n % 10 ;
		n = n / 10;
		s = (s * 10) + r;
	} 
	if (t == s)
	{
		cout << "It's a palindrome";
	}
	else
	{
		cout << "It's not a palindrome";
	}
	return 0;
}
