using namespace std;
#include<iostream>

class Time
{
  public:
	Time();
	void setTime( int ,int, int);
	void printmillitary();
	void printStandard();
  private:
	int hr;
	int min;
	int sec;
};

Time::Time(){hr=min=sec=0;}


void Time::setTime(int h,int m,int s)
{
	hr=(h>=0 && h<24)?h:0;
	min=(m>=0 && m<60)?m:0;
	sec=(s>=0 && s<60)?s:0;
}
void Time::printmillitary()
{
	cout<<(hr<10 ? "0": "")<<hr<<":"<<(min<10?"0" : "")<<min<<endl;

}

void Time::printStandard()
{
	cout<<((hr==0||hr==12)?12:hr%12)<<":"<<(min<10?"0":" ")<<min<<":"<<(sec<10?"0":" ")<<sec<<(hr>12?"PM":"AM");

}
int main()
{
	Time t;
	
	t.setTime(1,30,61);
	cout<<"the initial Millitary time is";
	t.printmillitary();
	
	cout<<"\n the initial standardtime is";
	t.printStandard();
	cout<<endl;
return 0;

}



