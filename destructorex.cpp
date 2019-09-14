#include<iostream>
using namespace std;
static int x;
class A
{
	public:
		A()
	{
		x++;
		cout<<x<<" ";
	}
		~A()
	{
		cout<<x*x<<" ";
		x--;
	}

};
int main()
{
	A a[10];
 	return 0;
}
