#include <iostream>
using namespace std;
class Car
{
	public:
	int mfg;
	string color;
	Car(int x, string c)
	{
		mfg = x;
		color = c;
	}
};

int main()
{
	Car obj(2012, "Brown");
		
	cout << "it's a " << obj.color << "  car ";
	cout <<"\n manufactured in  " << obj.mfg;
	return 0;
}
