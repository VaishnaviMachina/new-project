#include<iostream>
using namespace std;
class base
{
	int x;
	public:
		virtual void fun()=0;
		int getx(){return x;}
};
class derived:public base
{
	int y;
	public:
		void fun(){cout<<"fun() called\n";}
};
int main()
{
	derived d;
	//base b;-------creates error bcuz its an abstract class
	//b.getx();
	/*  base *bp;
	bp=new derived();*/
	d.fun();
	return 0;
}
