# include <iostream>
using namespace std;
class A
{
public:
	void /*static*/ show(int i)
	{
		x = i;
		cout<<x<<endl;
	}
private:
	int x;
 };
int main(void)
{
	A a;
	a.show(123);
	return 0;
}
