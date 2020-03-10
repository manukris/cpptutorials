#include <iostream>
using namespace std;
int main()
{
	string food = "Pizza";
	string* ptr = &food;
	cout << "&food - " << &food;
	cout << "\n ptr - " << ptr;
	cout << "\n *ptr - " << *ptr;
	cout << "\n food - " << food;
	return 0;
}
