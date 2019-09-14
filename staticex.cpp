#include<iostream>
#include<cstdlib>
int x=1;
using namespace std;
void a(void)
{
	int x=25;
	cout<<endl<<"local x in a is"<<x<<"after entering a"<<endl;

	++x;
	
	cout<<"local x in a is"<<x<<"before exiting a"<<endl;
}
void b(void)
{
	static int x=50;
	cout<<endl<<"local static x in b is"<<x<<"after entering b"<<endl;

	++x;
	cout<<"local static x in b is"<<x<<"on exiting b"<<endl;
}
void c(void)
{
	
	cout<<endl<<"global x in c is"<<x<<"after entering c"<<endl;

	x=x*10;
	cout<<"global x in c is"<<x<<"on exiting c"<<endl;
}

int main()
{

int x=5;

	cout<<"local x in outer scope of main is"<<x<<endl;

{
	int x=7;
	cout<<"local x in outer scope of main is"<<x<<endl;
}

	cout<<"local x in outer scope of main is"<<x<<endl;
	a();
	b();
	c();
	a();
	b();
	c();

}
