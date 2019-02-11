# include <iostream>
using namespace std;
class num
{
public:
	int get()const
	{
		return n; 
	}
	
	void set(int i)
	{
		n = i;
	}
	
	const num equal(const num &r)
	{
		n = r.get();
		return *this;
	}
private:
	int n;	
};
int main(void)
{
	num one,two;
	one.set(1);
	two = two.equal(one);
	cout<<two.get()<<endl; 
	return 0;
}
