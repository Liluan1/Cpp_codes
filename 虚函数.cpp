# include <iostream>
using namespace std;
class father 
{
public:
	virtual void run()	//��������������ʱ�����õ��ĸ�����ĺ��� 
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
