# include <iostream>
using namespace std;
class num
{
public:
	num()
	{
		n = new int;
	}
	num(int i)
	{
		n = new int;
		*n = i;
	}
	~num()
	{
		delete n;
		n = NULL;
	}
	
	int get()const
	{
		return *n; 
	}
	
	void set(int i)
	{
		*n = i;
	}
	
	const num &equal(const num &r)
	{
		*n = r.get();
		return *this;
	}
private:
	int *n;	
};
int main(void)
{
	num *one = new num(3);
	num two;
	two.equal(*one);
	cout<<two.get()<<endl;
	cout<<one->get()<<endl;
	return 0;
}
