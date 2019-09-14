#include<iostream>
using namespace std;
//int maximum(int, int, int);
int minimum(int, int, int);
int main()
{
	int a,b,c;
	cout<<"enter 3 nos"<<endl;
	cin>>a>>b>>c;
	//cout<<"maximum of 3 nos"<<maximum(a,b,c)<<endl;
	cout<<"minimum of 3 nos"<<minimum(a,b,c)<<endl;
}
int maximum(int a,int b,int c)
{
	//int max=(((a>b)?a:b)>c)?((a>b)?a:b):c;


	/*int max=a;
	if(b>max)
	max=b;
	else if(c>max)
	max=c;*/

	int m1=((a-b)>0)?a:b;
	int max=((m1-c)>0)?m1:c;
	
 	return max;
}
int minimum(int a,int b,int c)
{
	
	int min=(((a<b)?a:b)<c)?((a<b)?a:b):c;



	return min;

}
