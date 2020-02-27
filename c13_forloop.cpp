#include <iostream>
using namespace std;
int main()
{
	int r = 0, t = 0;
	cout << "\n the multiples of 7 in ascending order \n";
	for(int i = 7; i <= 1000; i = i + 7)
	{
		cout  << i << " , ";
	}
	cout << "\n \n the multiples of 7 in descending order \n";
	for (int j = 1001; j >= 7; j = j - 7)
	{
		cout << j << " , ";
	}
	for(int k = 7; k <= 1000; k = k + 7)
	{
		r = r + k;
	}
	cout << "\n \n sum of multiples of 7 till 1000 is " << r;
	for(int s = 7; s <=1000; s = s + 7)
	{
		if(s % 5 != 0)
		{
			t = t + s;
		}
	}
	cout << "\n \n sum of multiples of 7 till 1000  excluding 5 is  " << t;
	return 0;
}
