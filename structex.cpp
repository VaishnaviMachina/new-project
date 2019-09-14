using namespace std;
#include<iostream>

struct Time
{
	int hr;
	int min;
	int sec;
};

void printmillitary(const Time & );
//void printStandard(const time &);
int main()
{
	Time dinnerTime;
	dinnerTime.hr=18;
	dinnerTime.min=30;
	dinnerTime.sec=0;
	
	cout<<"Dinner time will beheld at";
	printmillitary(dinnerTime);
	cout<<"Millitary time,\n which is";
	//printStandard(dinnerTime);
	//cout<<"Standard time\n"
	
	dinnerTime.hr=29;
	dinnerTime.min=73;
	
	cout<<"\n time with invalid values:";
	printmillitary(dinnerTime);
	cout<<endl;
return 0;

}
void printmillitary(const Time &t)
{
	cout<<(t.hr<10 ? "0": "")<<t.hr<<":"<<(t.min<10?"0" : "")<<t.min<<endl;

}


