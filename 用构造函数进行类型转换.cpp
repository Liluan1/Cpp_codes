# include <iostream>
using namespace std;
class A
{
public:
	A(int i)
	{
		n = i;
		cout<<"���캯��\n";
	}
	~A()
	{
		cout<<"��������\n";
	}
	void get()
	{
		cout<<n<<endl;
	}
private:
	int n;
};
int main(void)
{
	A a(99);
	a.get();
	a = 1000;//ԭ������ͬ�� 
	a.get();
	a = A(2345);//���ǵ��ù��캯����������ת�� 
	a.get();
	return 0;
}
