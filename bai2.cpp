#include <iostream>
#include <cmath>
using namespace std;

bool isprime(int x)
{
	for (int i = 2; i * i <= x; i++)
	{
		if (x % i == 0)
		{
			return false;
		}
	}
	return true;
}

bool sumcs(int n)
{
	int temp = n;
	int ans = 0;
	while (temp > 0)
	{
		ans += temp % 10;
		temp /= 10;
	}
	return isprime(ans);
}

bool check(int m, int n)
{
	return pow(2, m) <= n;
}

int bs(int n)
{
	long long l = 0;
	long long r = n;
	long long res = 0;
	while (l <= r)
	{
		long long m = (l + r) / 2;
		if (check(m, n))
		{
			l = m + 1;
			res = m;
		}
		else
		{
			r = m - 1;
		}
	}
	return r;
}

int main()
{
	int n;
	cin >> n;
	if (isprime(n) && sumcs(n))
	{
		cout << "So n la song to" << endl;
	}
	for (int i = 2; i <= n; i++)
	{
		if (isprime(i) && sumcs(i))
		{
			cout << i << " ";
		}
	}
	int res = bs(n);
	cout << endl
		 << res << " " << n - pow(2, res);
}
