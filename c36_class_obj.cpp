#include <iostream>
using namespace std;
class Car // class creation
{
	public:
	//attributes
	int mfg;
	string model;
	string company;
	string color;
};
int main()
{
	Car num1; // object creation
	num1.mfg = 2000;
	num1.model = "SUV";
	num1.company = "Ford";
	num1.color = "Red";
	 
	 cout << "Manufacturing |Date  : " << num1.mfg;
	 cout << "\n Comapny : " << num1.company;
	return 0;
}
