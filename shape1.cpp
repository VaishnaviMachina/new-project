#include<iostream>
using namespace std;
class shape
{
	int length,breadth,side,ch,area;
	double radius,area_c;
	public:
	shape(int l,int b=1)
	{
	if(l!=b && b!=1)
	{
	length=l;breadth=b;
	ch=1;
	}
	else
	{
	side=l;
	ch=2;
	}
	}
	shape(double r)
	{
	radius=r;
	ch=3;
	}
	void call();
	void rect();
	void square();
	void circle();
};

void shape::call()
{
if(ch==1)
rect();
if(ch==2)
square();
if(ch==3)
circle();
}


void shape::rect()
{
area=length*breadth;
cout<<"area of rectangle:"<<area<<endl;
}
void shape::square()
{
area=side*side;
cout<<"area of square:"<<area<<endl;
}
void shape::circle()
{
area_c=3.14*radius*radius;
cout<<"area of circle:"<<area_c<<endl;
}


int main()
{
shape s1(10,5),s2(10),s3(3.0);
s1.call();
s2.call();
s3.call();
return 0;
}
