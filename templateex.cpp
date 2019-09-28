#include<iostream>
using namespace std;
template <typename T>
T myMax(T x,T y)
{
	return (x>y)?x:y;
}
int main()
{
	cout<<myMax<int>(1,7)<<endl;
	cout<<myMax<double>(3.0,7.3)<<endl;

	cout<<myMax<char>('q','e')<<endl;

}

