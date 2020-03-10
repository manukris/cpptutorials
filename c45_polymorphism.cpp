#include <iostream>
using namespace std;
class Parent1
{
	public:
	void method()
	{
		cout << "\n Parent method ";
	}
};
class Child : public Parent1
{
	public:
	void method()
	{
		cout <<"\n Child method";
		Parent1 :: method();
	}
};
int main()
{
	Child c1;
	c1.method();
	return 0;
}
