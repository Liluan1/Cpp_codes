# include <iostream>
using namespace std;
class father
{
public:
	father()
	{
		cout<<"build father"<<endl;
	}
	virtual void smart()
	{
		cout<<"Father is smart"<<endl;
	}
	~father()
	{
		cout<<"delete father"<<endl;
	}
};

class mother
{
public:
	mother()
	{
		cout<<"build mother"<<endl;
	}
	virtual void beautiful()
	{
		cout<<"Mother is beautiful"<<endl;
	}
	virtual ~mother()
	{
		cout<<"delete mother"<<endl;
	}
};
class son:public mother//, public father	
{										 
public:									 
	son()
	{
		cout<<"build son"<<endl;
	}
	virtual void smart()
	{
		cout<<"Son is smart"<<endl;
	}
	virtual void beautiful()
	{
		cout<<"Son is smart"<<endl;
	}
	~son()
	{
		cout<<"delete son"<<endl;
	}
};
int main(void)
{
//	father *pf = new son;
//	pf->smart();
//	delete pf;
	mother *pm = new son;
	pm->beautiful();
	delete pm;
	return 0;
}
/*
	father *pf;
	mother *pm;
	int choice;
	bool quit = false;
	while(1)
	{
		cin>>choice;
		switch(choice)
		{
		case 0:
			quit = true;
			break;
		case 1:
			pf = new father;
			pf->smart();
			delete pf;
			break;
		case 2:
			pm = new son;
			pm->beautiful();
			delete pm;
			break;	
		}
		if(quit)
			break;
	}
	return 0;
*/
/* 
�ҷ����ڶ��ؼ̳������ں���Ļ�����ָ���������ʵ�ֶ�̬ʱ
������������˳���ϻ���ִ��󣬵��±�����
ִ��˳�����£� 
build mother
build father
build son
Son is smart
delete father	//Ӧ����delete son����delete father����������ǣ���father��������������Ϊ����������
				//��Ϊ��ʹ��ָ���������ʵ�ֶ�̬ʱ��Ȼ���ڻ���������һ���麯������ʱֻ�н������
				//��������Ҳ����Ϊ�麯��������Ż���ȷ��ִ�У��������ڴ����ִ�У�ֻ��û�б��� 
--------------------------------
��������ǰ��Ļ�����ָ���������ʵ�ֶ�̬ʱ
������������˳����Ҳ����ִ��󣬵����������
ִ��˳�����£�
build mother
build father
build son
Son is smart
delete mother
-------------------------------- 
*/

 
