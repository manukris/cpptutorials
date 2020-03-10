#include <iostream>
using namespace std;
int array(int *ptr, int j);
int main()
{
	
	
	int k;
	
	int a[5] = {1, 2, 3, 4, 5};
	
	cout << "\n array is  = " ;
	for (int i = 0; i < 5; i ++)
	{
		k = array(a, i);
		cout << k << " ";
	}
	
}
int array(int *ptr, int j)
{
	
		return ptr[j];
	
}
