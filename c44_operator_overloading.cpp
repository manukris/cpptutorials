#include <iostream>
using namespace std;
class Complex
{
	private:
	int real;
	int imag;
	
	public:
	void getReal(int r)
	{
		real = r;
	}
	void getImag (int i)
	{
		imag = i;
	}
	void show()
	{
		cout << this->real << " + i " << this->imag;
	}
	 Complex operator+(const Complex& b) 
	 {
		Complex complex;
		complex.real = this->real + b.real;
		complex.imag = this->imag + b. imag;
		return complex;
	}
	
};
int main()
{
	int r1, r2, i1, i2;
	cout << "COMPLEX NUMBERS ADDITION:";
	cout << "\n enter first complex line  : ";
	cout << "\n Real part - ";
	cin >> r1;
	cout << "\n Imaginary part  - ";
	cin >> i1;
	cout << "\n\n enter second complex line  : ";
	cout << "\n Real part - ";
	cin >> r2;
	cout << "\n Imaginary part  - ";
	cin >> i2;
	Complex c1;
	c1.getReal(r1);
	c1.getImag(i1);
	Complex c2;
	c2.getReal(r2);
	c2.getImag(i2);
	Complex c3;
	c3 = c1 + c2;
	c3.show();
}
