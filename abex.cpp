
#include<iostream>
using namespace std;
class base
{
	public:
		virtual void show()=0;

		
};
class derived:public base{};
int main()
{
	derived d;
	return 0;
}
