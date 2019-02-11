# include <iostream>
using namespace std;
class num 
{
public:
	num(){
	}
	num(int i){
		n = i;
	}
	int get()const
	{
		return n;
	}
	void set(int i)
	{
		n = i;
	}
	const num operator+(const num &r)
	{
		return num(n+r.get());
	}
private:
	int n;
};
int main(void)
{
	num one(1), two(2),three;
	three = one+two;
//	three = one.operator+(two);		//µÈ¼ÛµÄ 
	cout<<three.get()<<endl;
	return 0;
} 
