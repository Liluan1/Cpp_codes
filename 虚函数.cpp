# include <iostream>
using namespace std;
class father 
{
public:
	virtual void run()	//编译器会在运行时检查调用的哪个对象的函数 
	{
		cout<<"father run"<<endl;
	}
};

class son:public father
{
public:
	void run()
	{
		cout<<"son run"<<endl;
	}
};

int main(void)
{
	son a;
	a.run();
	father *p = new son;
	p->run();
	delete p; 
	return 0;
}
