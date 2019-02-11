# include <iostream>
using namespace std;
class num 
{
	public:
		num()
		{
			n = 1;
			cout<<"构造函数\n"; 
		}
		num(int x)
		{
			n = x;
			cout<<"带参数的构造函数\n";
		}
		~num()
		{
			cout<<"析构函数\n";
		}
		 
		int get()const
		{
			return n;
		}
		void set(int x)
		{
			n = x;
		}
		void add()
		{
			n++;
		}
		num operator++()
		{
			++n;
//			num t;
//			t.set(n);
//			return t; 
			return num(n);
		}
	private:
		int n;
		
};
int main(void)
{
	num i;
	cout<<i.get()<<endl;
	i.add();
	cout<<i.get()<<endl;
	++i;//相当于i = opreater++();当按值返回对象时，会调用复制构造函数，别名不会 
	cout<<i.get()<<endl;
	num x = ++i;//构造对象并用另一个对象对它进行初始化，即便按别名返回对象，也会调用复制构造函数 
	cout<<i.get()<<endl; 
	return 0;
 }
 
//
