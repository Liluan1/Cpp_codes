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
		num(const num &s)
		{
			this->n = s.n;
			cout<<"复制构造函数\n";
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
		const num& operator++()//禁止了++++i的实现 
		{
			++n;
//			num t;
//			t.set(n);
//			return t; 
			return *this;//使程序更简单 
		}
		const num operator++(int o)//编译器默认将带有参数的认为是后自增 
		{
			num temp(*this);
			++n;
			return temp;
		}
	private:
		int n;
		
};
int main(void)
{
	num i;
	cout<<i.get()<<endl;
	num x = ++i;
	cout<<i.get()<<endl;
	cout<<x.get()<<endl;
	x = i++;
	cout<<i.get()<<endl;
	cout<<x.get()<<endl;	
	return 0;
 }
 

