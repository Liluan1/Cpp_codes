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
我发现在多重继承中排在后面的基类用指针或引用来实现多态时
在析构函数的顺序上会出现错误，导致崩溃；
执行顺序如下： 
build mother
build father
build son
Son is smart
delete father	//应该先delete son，再delete father，解决方法是，将father的析构函数定义为虚析构函数
				//因为当使用指针或引用来实现多态时必然会在基类中声明一个虚函数，这时只有将基类的
				//析构函数也声明为虚函数，程序才会正确的执行，否则都是在错误的执行，只是没有崩溃 
--------------------------------
但是排在前面的基类用指针或引用来实现多态时
在析构函数的顺序上也会出现错误，但不会崩溃；
执行顺序如下：
build mother
build father
build son
Son is smart
delete mother
-------------------------------- 
*/

 
