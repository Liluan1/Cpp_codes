# include <iostream>
using namespace std;
class num 
{
	public:
		num()
		{
			n = 1;
			cout<<"���캯��\n"; 
		}
		num(int x)
		{
			n = x;
			cout<<"�������Ĺ��캯��\n";
		}
		~num()
		{
			cout<<"��������\n";
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
	++i;//�൱��i = opreater++();����ֵ���ض���ʱ������ø��ƹ��캯������������ 
	cout<<i.get()<<endl;
	num x = ++i;//�����������һ������������г�ʼ�������㰴�������ض���Ҳ����ø��ƹ��캯�� 
	cout<<i.get()<<endl; 
	return 0;
 }
 
//
