# include <iostream>
using namespace std;
class num
{
public:
	num(){cout<<"默认构造函数\n";}
	
	num(int i)
	{
		cout<<"构造函数\n"; 
		n = i;
	}
	
	~num(){cout<<"析构函数\n";}
	
	num(const num&i)
	{
		n = i.n;
		cout<<"复制构造函数\n";
	}
	
	operator int()
	{
		return n;
	}
private:
	int n;
}; 
int main(void)
{
	num one(23);
	int x = one;
	cout<<int(one)<<endl;
	cout<<(one)<<endl;
	cout<<one<<endl;
	cout<<x<<endl;
}
