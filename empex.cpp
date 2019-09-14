using namespace std;
#include<iostream>
#include <string>

class employe
{
	private:
		string name;
		string employcode;
		double basicsal;
		double sales;

	public:
		employe();
		void getname();
		//void putname();
		void getempcode();
		//void putempcode();
		void getbasicsal();
		//void putbasicsal();
		void getsales();
		double setsales();
		double getsal();
	
};
employe::employe()
{ name="Vijay Dinanath Chauhan";
  employcode="0000";
  basicsal=sales=0.00;
}

void employe::getname()
{
	cout<<"Enter the name\n";
	cin>>name;
}
void employe::getempcode()
{
	cout<<"Enter the employe code\n";
	cin>>employcode;
}
void employe::getbasicsal()
{
	cout<<"Enter the basic salary\n";
	cin>>basicsal;
}
void employe::getsales()
{
	cout<<"Enter the sales\n";
	cin>>sales;
}
/*void employe::putname()
{
	cout<<"the employe name is\n";
	cout<<name<<endl;
}
void employe::putempcode()
{
	cout<<"Enter the employe code\n";
	cout<<employcode<<endl;
}
void employe::putbasicsal()
{
	cout<<"Enter the basic salary\n";
	cout<<basicsal<<endl;
}*/
double employe::setsales()
{
	return sales;
}
double employe::getsal()
{
	return basicsal;
}

int main()
{
	employe emp1;
	
	emp1.getname();
	emp1.getempcode();
	emp1.getbasicsal();
	emp1.getsales();

	/*emp1.putname();
	emp1.putempcode();
	emp1.putbasicsal();*/
	double saless=emp1.setsales();
	
	double bs=emp1.getsal();
	cout<<"fixed salary"<<bs<<endl;
	double hra=0.3*bs;
	
	double ctc=bs;
	if((hra+bs)>500000)
	ctc=ctc+100000;
	if(saless>2000000)
	ctc=(0.1*saless)+ctc;

	cout<<"the final ctc with incentives(if any):"<<ctc<<endl;
}





