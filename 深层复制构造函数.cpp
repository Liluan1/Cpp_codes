# include <iostream>
using namespace std;
class num
{
public:
	num()
	{
		n = new int;
		cout<<"���캯��\n";
	}
	
	num(int i)
	{
		n = new int;
		*n = i;
		cout<<"���캯��\n";
	}
	
	~num()
	{
		delete n;
		n = NULL;
		cout<<"��������\n";
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
		n = new int;	//�ڶ����·���һ�ڴ�ռ䣬ָ��ָ��ͬ�Ŀռ䣬ֻ����ֵ�ĸ���	
		*n = *i.n;	 
		cout<<"���ƹ��캯��\n";
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
