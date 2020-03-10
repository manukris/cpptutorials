#include <iostream>
#include <ctime>
using namespace std;
void getSeconds( long *par)
{
	*par = time(NULL);
}
int main()
{
	long sec;
	getSeconds(&sec);
	cout << "\n Seconds  = " << sec;
	return 0;
}

