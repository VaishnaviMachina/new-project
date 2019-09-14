#include<iostream>
using namespace std;
class parent
{
	protected:
		int id_protected;
};
class child:public parent
{
	public:
		void setId(int d)
		{
		  id_protected=d;
		}
};
void f()
{
    char *p= 0;
    
}
int main()
{
	child obj1;
	obj1.setId(2);
	
}
