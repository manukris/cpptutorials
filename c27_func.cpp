#include <iostream>
using namespace std;
void myFunction (string country = "Norway")
{
	cout << "\n Your country is  " << country;
}
int main()
{
	myFunction("India");
	myFunction("Japan");
	myFunction();
	return 0;
}
