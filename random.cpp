#include<iostream>
#include<cstdlib>
#include<iomanip>
using namespace std;
int main()
{
	unsigned seed;
	cout<<"enter seed"<<endl;
	cin>>seed;
	srand(seed);
	for(int i=1;i<=10;i++){
	cout<<setw(10)<<1+rand()%6;
	
	if(i%5==0)
 	cout<<endl;}



return 0;

}
