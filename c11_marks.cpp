#include <iostream>
using namespace std;
int main()
{
	int a;
	cout << "Enter your marks in 100 \n";
	cin >> a;
	if (a >= 50)
	{
		if(a >= 80)
		{
			cout << "\n Distingtion ";
		}
		else if (a >= 60 && a < 80)
		{
			cout <<"\n First Class ";
		}
		else
		{
			cout << "Passed";
		}
	}
	else
	{
		cout << "\n \a failed";
	}
	return 0;
}
