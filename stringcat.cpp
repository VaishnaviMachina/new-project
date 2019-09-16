using namespace std;
#include<iostream>
class Str
{
	private:
		 string str1;
	public: 
		Str(string st){ str1=st;}
		Str operator + (Str const &obj) {

		str1.append(obj.str1);

		return str1;

		}
void print() {cout<<str1<<endl;}
};

int main()
{
Str s1("Hello! ");
Str s2("How are you?");
Str r=s1+s2;
r.print();
return 0;
}
