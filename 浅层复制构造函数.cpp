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
		n = i.n;	//ֻ�ǽ�ָ����и��ƣ���ǳ�㸴�ƣ������Ӧ������㸴�� 
		cout<<"���ƹ��캯��\n";
	}
private:
	int *n;
};
int main(void)
{
	num *one = new num(34);
	num two = (*one);
	cout<<one->get()<<endl;
	cout<<two.get()<<endl;
	delete one; 
	cout<<two.get()<<endl;	
	return 0;
}
//����˵����Ӧ�ñ����ģ���Ϊ����one,two�е�ָ�����nָ�����ͬһ�ڴ�ռ�
//����ʱ�Ὣͬһ�ڴ�ռ��ͷ����� 
