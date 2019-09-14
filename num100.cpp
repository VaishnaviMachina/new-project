#include<iostream>
#include<cstdlib>
using namespace std;
static int x;
class numbers
{
 public:
	numbers();
};
numbers::numbers()
{
	x++;
	cout<<x<<" ";

}
int main()
{
	numbers n[100];
 return 0;
}
