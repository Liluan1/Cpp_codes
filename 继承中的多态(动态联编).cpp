# include <iostream>
using namespace std;
class A
{
public:
	virtual void print()	//���̳е��麯����Ȼ���麯�� 
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
	c.print();	//��ʹ��virtual�麯��ʱ���о�̬���� 
	return 0;
*/
	A *p = new A;
	A *p1 = new B;
	A *p2 = new C;
	p->print();
	p1->print();
	p2->A::print();	//ʹ��virtual ����ʱ����ʹ�ö�̬���� 
}					//�����ú������޶��ķ�ʽ���Խ����̬���� 
