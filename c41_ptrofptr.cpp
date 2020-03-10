#include <iostream>
using namespace std;

int main()
{
	int var;
	int *ptr;
	int **pptr;
	
	var = 5000;
	ptr = &var;
	pptr = &ptr;
	
	cout << "Variable = " << var;
	cout <<"\n Pointer = " << *ptr;
	cout << "\n Pointer to pointer = " << **pptr;
	return 0;
}
