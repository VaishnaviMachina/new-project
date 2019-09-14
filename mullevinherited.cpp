#include<iostream>
using namespace std;
class Vehicle
{
	public:
		Vehicle()
		{
		  cout<<"this is a vehicle\n";
		}
};
class Fourwheeler:public Vehicle
{
	public:
		Fourwheeler()
		{
		  cout<<"this is a Fourwheeler\n";
		}
};
class Car:public Fourwheeler
{
	public:
		Car()
		{
		  cout<<"this is a Car\n";
		}
};
int main()
{
	Car obj;
	Fourwheeler ob;
	return 0;
}
