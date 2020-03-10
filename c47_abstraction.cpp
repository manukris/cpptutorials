#include <iostream>
using namespace std;
class c1
{
	 private:
         int total;
	public:
	c1(int i =0)
	{
	total = i;
	}
	void addNum(int n) 
	{
         total += n;
      }
      int getTotal() 
       {
			return total;
		}
        
};
int main()
{
	c1 c;
	c.addNum(20);
	c.addNum(30);
	cout << "\n total = " << c.getTotal();
	return 0;
}
