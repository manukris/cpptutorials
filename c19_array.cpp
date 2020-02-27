#include <iostream>
using namespace std;
int main()
{
	int a[10], n, s = 0;
	cout << "MARK SHEET";
	cout << "\n Enter number of subjects - ";
	cin >> n;
	cout << "\n Enter marks for each subject \n ";
	for (int i = 0; i < n; i ++)
	{
		cout << "\n Subject " << i + 1 << " - ";
		cin >> a[i];
	}
	cout << "\n Total of all marks entered is \n ";
	for (int j = 0; j < n; j ++)
	{
		s = a[j] + s;
	}
	cout << s;
	cout << "\n average of all marks entered is \n ";
	cout << s/n ;
	return 0;
}
