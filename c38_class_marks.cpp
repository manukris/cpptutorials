#include <iostream>
using namespace std;
class Div
{
	public:
	int age;
	string name;
	int marks;
	void input();	
};

void Div::input()
{
	cout <<"\n Enter details of student : ";
	cout << " \n Name - ";
	cin >> name;
	cout << "\n Age - ";
	cin >> age;
	cout << " \n Marks - ";
	cin >> marks;
	
}
int main()
{
	Div s1, s2;
	s1.input();
	s2.input();	
	cout <<" \n \n Details of Student 1 ";
	cout <<"\n Name is  " << s1.name << ", Age is  " << s1.age <<", Marks is  " << s1.marks;
	cout << "\n \n Details of Student 2 ";
	cout <<"\n Name is  " << s2.name << ", Age is  " << s2.age <<", Marks is  " << s2.marks;
	return 0;
}
