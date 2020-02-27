#include <iostream>
using namespace std;
int main()
{
	int n, i;
	cout << "PRIME OR NOT ? ";
	cout << "\n enter a number ";
	cin >> n;
	for( i = 2; i < n; i ++)
	{
		if(n % i == 0)
		{
			cout << "\n Not a prime number ";
			break;
		}
		
	}
	if( i == n)
		{
			cout << "\n It's a prime number ";
		}
	
	return 0;
}
