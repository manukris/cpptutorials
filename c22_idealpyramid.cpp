#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "IDEAL PYRAMID";
	cout << "\n Enter number of rows - ";
	cin >> n;
	for(int i = 1, k=0; i <= n; i ++, k = 0)
	{
		cout << "\n";
		for( int j = 1; j <= n - i ; j ++)
		{
			cout << " ,  ";
		}
		while (k != 2*i - 1)
		{
			cout << " ^ ";
			k = k + 1;
		}
	}
	return 0;
}
