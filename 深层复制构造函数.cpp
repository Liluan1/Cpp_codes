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
		n = new int;	//在堆中新分配一内存空间，指针指向不同的空间，只进行值的复制	
		*n = *i.n;	 
		cout<<"复制构造函数\n";
	}
private:
	int *n;
};
int main(void)
{
	num one(23);
	num two = one;
	num *three = new num(34);
	cout<<two.get()<<endl;
	cout<<three->get()<<endl;
	return 0;

}
