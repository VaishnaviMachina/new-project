#include<iostream>
using namespace std;
template<class T,class U=char>
class A
{
	public:
		T x;
		U y;
		A(){cout<<"constructor called"<<endl;}
};
int main()
{
	A<char> a;
	return 0;
}
