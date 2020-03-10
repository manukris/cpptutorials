#include <iostream>
using namespace std;
int hcf(int a, int b)
{
	int c, r;
	if( a < b)
	{
		c = a;
		a = b;
		b = c;
	}
	while(1)
	{
		r = a % b;
		if ( r == 0)
		{
			return b;
		}
		else 
		{
			a = b;
			b = r;
		}
	}
}
int lcm (int t, int s)
{
	return (t*s)/hcf(t, s);
}
int main()
{
	int p, q;
	cout << " LCM AND HCF";
	cout <<" \n enter first number - ";
	cin >> p;
	cout << "\n Enter second number - ";
	cin >> q;
	cout << " \n HCF = " << hcf(p,q);
	cout << "\n LCM = " << lcm(p,q);
}
