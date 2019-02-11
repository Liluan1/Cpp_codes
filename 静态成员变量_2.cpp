# include <iostream>
using namespace std;
class A
{
public:
	void func()
	{
		cout<<A::x<<endl;
	}
private:
	static int x;
};
int A::x = 1000;
int main(void)
{
	A a;
	a.func();
	return 0;
} 
