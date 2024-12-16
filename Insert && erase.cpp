#include <iostream>
#include <set>	
#include <map>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int q;
	cin >> q;
	while (q--)
	{
		int t;
		cin >> t;
		if (t == 1)
		{
			int index, num;
			cin >> index >> num;
			a.insert(a.begin() + index, num);
		}
		else if (t == 2)
		{
			int index;
			cin >> index;
			a.erase(a.begin() + index);
		}
	}
	if (a.size() == 0)
	{
		cout << "EMPTY" << endl;
	}
	else
	{
		for (auto x : a)
		{
			cout << x << " ";
		}
	}
}
