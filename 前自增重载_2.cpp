# include <iostream>
using namespace std;
class num 
{
	public:
		num()
		{
			n = 1;
		}
		~num()
		{
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
			num t;
			t.set(n);
			return t; 
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
	++i;
	cout<<i.get()<<endl;
	num x = ++i;
	cout<<i.get()<<endl; 
	return 0;
 }
 
//即可以进行自增还可以与其他语句配合使用 
