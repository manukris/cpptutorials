#include <iostream>
using namespace std;
int main()
{
	int a = 1, n;
	cout << "FLOYD'S TRIANGLE ";
	cout << "\n Enter number of rows - ";
	cin >> n;
	for (int i = 1; i <= n; i ++)
	{
		cout << "\n";
		for (int j = 1; j <= i; j ++)
		{
			cout << a << "  ";
			a= a +1;
		}
	}
	return 0;
}
