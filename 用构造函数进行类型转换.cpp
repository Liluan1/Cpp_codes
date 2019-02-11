# include <iostream>
using namespace std;
class A
{
public:
	A(int i)
	{
		n = i;
		cout<<"构造函数\n";
	}
	~A()
	{
		cout<<"析构函数\n";
	}
	void get()
	{
		cout<<n<<endl;
	}
private:
	int n;
};
int main(void)
{
	A a(99);
	a.get();
	a = 1000;//原理是相同的 
	a.get();
	a = A(2345);//都是调用构造函数进行类型转换 
	a.get();
	return 0;
}
