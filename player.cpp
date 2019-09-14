#include<iostream>
using namespace std;
class player
{
	private :
		int runs,wickets;
	public:
		int getrun()
		{
		  return runs;
		}
		int getwicket()
		{
		  return wickets;
		}
		
		player(int run,int wicket)
		{runs=run;wickets=wicket;}
		player(const player &p)
		{runs=p.runs;wickets=0;}
};
int main()
{
	player p1(100,3),p2(300,6);
	
	player p3=p1;
	player p4=p2;
	player p5=p1;
	
	cout<<"p1.runs="<<p1.getrun()<<endl;
	cout<<"p1.wickets="<<p1.getwicket()<<endl;
	cout<<"p2.runs="<<p2.getrun()<<endl;
	cout<<"p2.wickets="<<p2.getwicket()<<endl;
	cout<<"p3.runs="<<p3.getrun()<<endl;
	cout<<"p3.wickets="<<p3.getwicket()<<endl;
	cout<<"p4.runs="<<p4.getrun()<<endl;
	cout<<"p4.wickets="<<p4.getwicket()<<endl;
	cout<<"p5.runs="<<p5.getrun()<<endl;
	cout<<"p5.wickets="<<p5.getwicket()<<endl;


}
