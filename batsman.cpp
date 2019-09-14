#include<iostream>
using namespace std;
static int x=-1;
class batsman
{
	private:
		int runs;
	public:
		batsman();
		void score();
		void ipl();
		void icc();
		void wcc();
		void odi();
};
batsman::batsman()
{
	x++;
}

void batsman::score()
{
	ipl();
	icc();
	wcc();
	odi();
}
void batsman::ipl()
{
	batsman b1,b2;
}
void batsman::icc()
{
	batsman b3,b4,b5;
}
void batsman::wcc()
{
	batsman b6,b7,b8,b9,b10;
}
void batsman::odi()
{
	batsman a,s,d,f,g,h,j,k,l,z,x;
}
int main()
{
	batsman t;
	t.score();
	cout<<"no of objects"<<x;
}

