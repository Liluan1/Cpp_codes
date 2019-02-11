# include <cstdio>
# include <iostream>
# include <string>
# include <set>
# include <sstream>
using namespace std;

set<string> dict;	//集合 

int main(void)
{
	string s,buf;
	while(cin>>s)
	{
		for(int i=0;i<s.length();++i)
		{
			if(isalpha(s[i]))	//isalpha 判断是否为字母 
				s[i] = tolower(s[i]);	//tolower 转换为小写字母 
			else
			{
				s[i] = ' ';
			}
		}
		stringstream ss(s);		//创建一个字符串流 
		while(ss>>buf)
			dict.insert(buf);
	}
	for(set<string>::iterator it = dict.begin(); it != dict.end();++it)		//迭代器，类似于指针 
		cout<<*it<<"\n";
	return 0;
 } 
