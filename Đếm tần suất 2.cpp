#include <iostream>
#include <set>	
#include <map>
#include <algorithm>
#include <cmath>
#include <vector>
#include <numeric>
#include <iomanip>
using namespace std;

int main()
{
	vector<pair<char, int>> v;
	int n;
	cin >> n;
	vector<char> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		bool found = false;
		for (int j = 0; j < v.size(); j++)
		{
			if (v[j].first == a[i])
			{
				v[j].second++;
				found = true;
				break;
			}
		}
		if (found == false)
		{
			v.push_back({ a[i],1 });
		}
	}
	cout << v.size() << endl;
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i].first << " " << v[i].second << endl;
	}
}
