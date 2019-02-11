# include <iostream>
using namespace std;
class A
{
public:
	static int n;
};
int A::n = 0;
void show()
{
	cout<<A::n<<endl;
}
int main(void)
{
	int i;
	for(i=0;i<5;++i)
	{
		A::n++;
		show();
	}
	return 0;
}
