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
		num(const num &s)
		{
			this->n = s.n;
			cout<<"���ƹ��캯��\n";
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
		const num& operator++()//��ֹ��++++i��ʵ�� 
		{
			++n;
//			num t;
//			t.set(n);
//			return t; 
			return *this;//ʹ������� 
		}
		const num operator++(int o)//������Ĭ�Ͻ����в�������Ϊ�Ǻ����� 
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
 

