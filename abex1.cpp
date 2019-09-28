#include<iostream>
using namespace std;
class base
{
	protected:
		int x;
	public:
		virtual void fun()=0;
		base(int i){x=i;}

		
};
class derived:public base{
	int y;
	public:
		derived (int i,int j):base(i){y=j;}
		void fun(){cout<<"x="<<x<<",y="<<y<<endl;}

};
int main()
{
	derived d(4,5);
	d.fun();
	return 0;
}
