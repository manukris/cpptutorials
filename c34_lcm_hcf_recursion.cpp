#include <iostream>
using namespace std;
int hcf(int p, int q)
{
	int rem = p % q ;
	if (rem == 0)
	{
		return q;
	}
	else
	{
		hcf(q,rem);
	}
}
int lcm(int t, int s)
{
	return (t*s)/hcf(t,s);
}
int main()
{
	int a, b;
	cout << " HCF & LCM WITH RECURSION";
	cout << " \n Enter first number - ";
	cin >> a;
	cout << "\n Enter second number - ";
	cin >> b;
	cout << "\n \n HCF = " << hcf(a,b);
	cout << "\n LCM = " << lcm(a,b);
	return 0;
}
