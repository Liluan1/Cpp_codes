# include <iostream>
using namespace std;
class father
{
public:
	father(string ,int );
	father()
	{
		cout<<"build father"<<endl;
	}
	~father()
	{
		cout<<"release father"<<endl;
	}
	void print()
	{
		cout<<name<<endl<<age<<endl;
	}
protected:
	string name;
	int age;	
};
father::father(string a,int i)
{
	cout<<"in the build father"<<endl;
	name = a;
	age = i;
	cout<<"leave father"<<endl;
}

class son:public father
{
public:
	son (string a,int i,int j);
	void print1();
	~son()
	{
		cout<<"release son"<<endl;
	}
private:
	int weight;
};
son::son(string a,int i,int j):father(a,i) 
{
//	name = a;
//	age = i;
	weight = j;
	cout<<"in the son"<<endl;
}
void son::print1()
{
	father::print();
	cout<<weight<<endl;
//	cout<<name<<age<<weight<<endl;
}
int main(void)
{
	son a("mike",18,130);
	a.print1();
	return 0;
 } 
