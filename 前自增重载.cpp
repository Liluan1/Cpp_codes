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
		void operator++()
		{
			++n;
			
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
//	num x = ++i;
//	cout<<i.get()<<endl; 
	return 0;
 }
 
//这个程序意味着++i这能单独使用，无法和去他语句配合使用，功能单一 
