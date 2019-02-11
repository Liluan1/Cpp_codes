#include <iostream>
using namespace std;
int a[10000];
int main()
{
	int lo, hi,sum,right;
	right = hi;
	cin >> lo >> hi;
	for (int i = 1; i <= hi; ++i)
		a[i] = i;
	for(int i=2;i<hi;++i)
		for (int j = 1; j <= hi / i; ++j)
		{
			if (i*j < hi--)
				a[i+j-1] = a[i*j + 1];
		}

	for (int i = 0; i <= hi; ++i)
	{
		if (a[i] < lo)
			sum = 0;
		else if (a[i] == hi || i == hi)
			cout << sum;
		else
			sum++;
	}
    return 0;
}


