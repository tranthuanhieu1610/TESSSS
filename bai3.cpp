#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

void pr(int v)
{
	while (v--)
	{
		cout << 'a';
	}
}

int main()
{
	string s;
	cin >> s;
	vector<int> num;
	vector<int> ch;
	int n = s.size();
	for (int i = 0; i < n;)
	{
		if (isdigit(s[i]))
		{
			int tmp = 0;
			while (isdigit(s[i]))
			{
				tmp = tmp * 10 + (s[i] - '0');
				i++;
			}
			num.push_back(tmp);
		}
		else
		{
			int tmp = 0;
			while ((s[i]) == 'a')
			{
				tmp++;
				i++;
			}
			ch.push_back(tmp);
		}
	}
	sort(num.begin(), num.end());
	for (int i = 0; i < max(num.size(),ch.size()); i++)
	{
		if (i<ch.size())
		pr(ch[i]);
		if (i<num.size())
		cout << num[i];
	}
}
