# include <iostream>
using namespace std;
class A
{
public:
	virtual void print()	//被继承的虚函数依然是虚函数 
	{
		cout<<"a"<<endl;
	}
};
class B:public A
{
public: 
	void print()
	{
		cout<<"b"<<endl;
	}
};
class C:public A
{
public:
	void print()
	{
		cout<<"c"<<endl;
	}
};
int main(void)
{
/*	A a;
	B b;
	C c;
	a.print();
	b.print();
	c.print();	//不使用virtual虚函数时进行静态联编 
	return 0;
*/
	A *p = new A;
	A *p1 = new B;
	A *p2 = new C;
	p->print();
	p1->print();
	p2->A::print();	//使用virtual 函数时，会使用动态联编 
}					//但是用函数名限定的方式可以解除动态联编 
