# include <iostream>
using namespace std;
class father 
{
public:
	void a()
	{
		cout<<"father a"<<endl;
	}
	void a(int i)
	{
		cout<<"father ai"<<endl;
	}
};

class son:public father
{
public:
	void a()
	{
		cout<<"son a"<<endl;
	 }
	void a()const
	{
		cout<<"son const b"<<endl;
	 } 
};
int main(void)
{
	son a;
	const son b;	//const变量只能调用const成员函数 
	b.a();
	a.a();	//基类中的同名函数及重载函数被覆盖掉 
//	a.a(1);
	return 0;
}
