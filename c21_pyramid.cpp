#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "PYRAMID";
	cout << "\n enter number of rows required for the pyramid\n ";
	cin >> n;
	for (int i = 0; i < n ; i ++)
	{
		cout << "\n";
		for (int j = 0; j <= i ; j ++)
		{
			cout << j + 1 << "  ";;
		}
	}
	cout << "\n \n REVERSE PYRAMID \n \n ";
	for (int i =n ; i > 0; i --)
	{
		cout << "\n";
		for (int j = i; j > 0; j --)
		{
			cout << j << "  ";
		}
	}
	return 0;
}
