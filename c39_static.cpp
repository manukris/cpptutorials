#include <iostream>
using namespace std;
class A1
{
	public:
	void s1 ()
	{
		int s = 0;
				cout << s << " ";
				s++;
	
	}
};
int main()
{
	A1 obj;
	//int r;
	//cout <<"\n Enter a number ";
	//cin >> r;
	obj.s1();
	obj.s1();
	obj.s1();
	return 0;
}
