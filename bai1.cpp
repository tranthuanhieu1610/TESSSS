#include <iostream>
#include <set>
#include <cmath>
#include <algorithm>
#include <vector>
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

bool iscp(int x)
{
	if ((1.0 * sqrt(x)) * (1.0 * sqrt(x)) == x)
	{
		return true;
	}
	return false;
}

int main()
{
	int n;
	cin >> n;
	vector<int> p;
	set<int> cp;
	while (n--)
	{
		int tmp;
		cin >> tmp;
		if (tmp > 0)
		{
			if (iscp(tmp))
			{
				cp.insert(tmp);
			}
			if (isprime(tmp))
			{
				p.push_back(tmp);
			}
		}
	}
	for (auto i : cp)
	{
		cout << i << " ";
	}
	cout << endl;
	sort(p.begin(), p.end(),greater <int>());
	for (auto i : p)
	{
		cout << i << " ";
	}
	cout << endl;
}
