# include <iostream>
using namespace std;
class father 
{
public:
	void a()
	{
		cout<<"father a"<<endl;
	}
	void a(int i)
	{
		cout<<"father ai"<<endl;
	}
};

class son:public father
{
public:
	void a()
	{
		cout<<"son a"<<endl;
	 }
	void a()const
	{
		cout<<"son const b"<<endl;
	 } 
};
int main(void)
{
	son a;
	const son b;	//const����ֻ�ܵ���const��Ա���� 
	b.a();
	a.a();	//�����е�ͬ�����������غ��������ǵ� 
//	a.a(1);
	return 0;
}
