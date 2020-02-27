#include <iostream>
using namespace std;
int main()
{
	int c = 1, n;
	cout << "PASCAL'S TRIANGLE";
	cout << "\n Enter number of rows - ";
	cin >> n;
	for (int i = 0; i < n; i ++)
	{
		cout << "\n";
		for (int j = 1; j <= n - i; j ++)
		{
			cout << "   ";
		}
			for(int k = 0; k <= i; k++)
        {
            if (k == 0 || i == 0)
            {
                c = 1;
			}
            else
			{
                c = c*(i-k+1)/k;
			}
            cout << c << " ";
		}
	
	}
	return 0;
}

