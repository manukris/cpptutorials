#include <iostream>
using namespace std;
int main()
{
	int n, i = 1;
	cout << "Enter a number  - ";
	cin >> n;
	cout << "\n The factors of the given number is \n ";
	while (i <=n )
	{
		if(n % i == 0)
		{
			cout << i << "\n";
		}
		i = i + 1;
	}
}
