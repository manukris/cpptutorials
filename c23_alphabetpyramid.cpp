#include <iostream>
using namespace std;
int main()
{
	
	int n;
	cout << "ALPHABET PYRAMID";
	cout << "\n Enter number of rows - ";
	cin >> n;
	for (int i = 1; i <= n; i ++)
	{
		cout << "\n";
		char a = 65;
		for (int j = 1; j <= i; j ++)
		{
			cout << a << "  ";
			a= a + 1;
		}
	}
	return 0;
}
