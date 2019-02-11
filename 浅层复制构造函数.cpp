# include <iostream>
using namespace std;
class num
{
public:
	num()
	{
		n = new int;
		cout<<"构造函数\n";
	}
	
	num(int i)
	{
		n = new int;
		*n = i;
		cout<<"构造函数\n";
	}
	
	~num()
	{
		delete n;
		n = NULL;
		cout<<"析构函数\n";
	}
	
	int get()
	{
		return *n;
	}
	
	void set(int i)
	{
		*n = i;
	}
	
	num(const num &i)
	{
		n = i.n;	//只是将指针进行复制，是浅层复制，会出错，应该用深层复制 
		cout<<"复制构造函数\n";
	}
private:
	int *n;
};
int main(void)
{
	num *one = new num(34);
	num two = (*one);
	cout<<one->get()<<endl;
	cout<<two.get()<<endl;
	delete one; 
	cout<<two.get()<<endl;	
	return 0;
}
//按理说程序应该崩溃的，因为对象one,two中的指针变量n指向的是同一内存空间
//析构时会将同一内存空间释放两边 
