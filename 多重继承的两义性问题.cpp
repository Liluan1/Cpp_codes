/* 
# include <iostream>
using namespace std;
class A
{
public:
	void get()
	{
		cout<<"A"<<endl;
	}
};
class B
{
public:
	void get()
	{
		cout<<"B"<<endl;
	}	
};
class C:public A,public B
{
public:
	void get()
	{
		cout<<"C"<<endl;
	 } 
};
int main(void)
{
	C c; 
//	c.A::get();		//成员名限定 
	c.get();		//类C离main函数最近，所以调用类C的get函数
	A a;
	a.get();		
	return 0;
 } 
 
 */
 
# include <iostream>
using namespace std;
class human
{
public:
	void hello()
	{
		cout<<"human hello"<<endl;
	}
};
class father:virtual public human	//将函数说明为虚基类不会产生两义性问题 
{
	
};
class mother:virtual public human
{
  };
class son:public father ,public mother
{
  };
 int main(void)
 {
 	son a;
 	a.hello();
 	return 0;
   }  
