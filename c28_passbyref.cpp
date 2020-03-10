#include <iostream>
using namespace std;
void swap(int &x, int &y)
{
	int z;
	z = x;
	x = y;;
	y = z;
}
int main()
{
	int a, b;
	cout << "\n SWAP NUMBERS (PASS BY REFERENCE)";
	cout << "\n Enter numbers : \n Num 1 - ";
	cin >> a;
	cout << "\n Num 2  - ";
	cin >> b;
	cout << "\n \n Before swapping ";
	cout << "\n Num 1 - " << a;
	cout << "\n Num 2 - " << b;
	swap(a,b);
	cout << "\n \n After swapping ";
	cout << "\n Num 1 - " << a;
	cout << "\n Num 2 - " << b;
	return 0;
}
