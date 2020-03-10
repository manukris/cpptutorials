#include <iostream>
using namespace std;
class A1
{
	public:
	A1()
	{
		cout << "\n Object created";
	}
	~A1()
	{
		cout << "\n Object destroyed";
	}
};
int main()
{
	A1 obj;
	return 0;
	
}
