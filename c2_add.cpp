#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout << "enter two numbers for adding";
	cout << "\n num 1 ?  ";
	cin >> a;
	cout << "\n num 2 ?  ";
	cin >> b;
	cout << "\n the sum is : " << a+b ;
	
	cout << "\n the entered numbers are  " << a << "  and  " << b;
	a = a + b;
	b = a -b;
	a = a - b;
	cout << "after swapping ";
	cout << "\n num 1 = " << a;
	cout << "\n num 2 = " << b;
	return 0;
}
