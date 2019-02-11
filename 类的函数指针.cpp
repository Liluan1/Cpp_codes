# include <iostream>
using namespace std;
class A
{
public:
	void set(int i)
	{
		x = i;
	}
	void show()
	{
		cout<<x<<endl;
	}
private:
	int x;
};

void func(int a,int b)
{
	cout<<a<<b<<endl;
}

int main(void)
{
	A a;
	A *b = new A;
	void (A::*p)()=0;
	void (A::*p1)(int)=0;
//	void (*p2)(int,int)=0;
//	a.set(123);
//	a.show();
	p = &A::show;
	p1 = &A::set;
	(b->*p1)(123);
	(b->*p)();

	(a.*p1)(123);
	(a.*p)();
//	p2 = &func;
//	p2(1,2);
	 
	return 0;
}
