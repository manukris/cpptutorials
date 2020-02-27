#include <iostream>
using namespace std;
int main()
{
	int n;
	int i = 1, j = 1;
	cout << "Enter a value for fibonacci series ";
	cin >> n;
	cout << " the requested fibonaci series is \n";
	cout << i << " , " << j << " , " ;
	for(int k = 1, r = 0; k <= n-2; k = k + 1)
	{
		r = i + j;
		cout << r << " , ";
		i = j;
		j = r;
	}
	return 0;
}
