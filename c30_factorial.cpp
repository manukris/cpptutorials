#include <iostream>
using namespace std;


int fact(int num)
{
	if (num != 1)
	{
		 int result = num * fact(num - 1);
		 cout<< result << "\n";
		 return result;
	}
	else
		return 1;
	
	 
}



int main()
{
	
	cout << fact(5);
	

	
}
