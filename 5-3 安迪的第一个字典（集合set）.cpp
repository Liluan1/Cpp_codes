# include <cstdio>
# include <iostream>
# include <string>
# include <set>
# include <sstream>
using namespace std;

set<string> dict;	//���� 

int main(void)
{
	string s,buf;
	while(cin>>s)
	{
		for(int i=0;i<s.length();++i)
		{
			if(isalpha(s[i]))	//isalpha �ж��Ƿ�Ϊ��ĸ 
				s[i] = tolower(s[i]);	//tolower ת��ΪСд��ĸ 
			else
			{
				s[i] = ' ';
			}
		}
		stringstream ss(s);		//����һ���ַ����� 
		while(ss>>buf)
			dict.insert(buf);
	}
	for(set<string>::iterator it = dict.begin(); it != dict.end();++it)		//��������������ָ�� 
		cout<<*it<<"\n";
	return 0;
 } 
