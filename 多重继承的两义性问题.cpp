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
//	c.A::get();		//��Ա���޶� 
	c.get();		//��C��main������������Ե�����C��get����
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
class father:virtual public human	//������˵��Ϊ����಻��������������� 
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
