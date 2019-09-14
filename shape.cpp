#include<iostream>
#define PI 3.14
using namespace std;
class shape
{
	private:
		float area;
	public:	
		shape(){area=1;};
		float rect(float x=1.0,float y=1.0);
		float square(float x=1.0);
		float circle(float r=1.0);
};

float shape::rect(float x,float y)
{
	return area=x*y;
}
float shape::square(float x)
{
	return area=x*x;
}
float shape::circle(float r)
{
	return area=PI*r*r;
}
int main()
{
	shape s;
	cout<<"area of rectange with l=5,b=3 "<<s.rect()<<endl;
	cout<<"area of square with l=5 "<<s.square()<<endl;
	cout<<"area of circle with r=3.5 "<<s.circle()<<endl;
	return 0;
}
