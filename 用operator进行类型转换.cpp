# include <iostream>
using namespace std;
class num
{
public:
	num(){cout<<"Ĭ�Ϲ��캯��\n";}
	
	num(int i)
	{
		cout<<"���캯��\n"; 
		n = i;
	}
	
	~num(){cout<<"��������\n";}
	
	num(const num&i)
	{
		n = i.n;
		cout<<"���ƹ��캯��\n";
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
