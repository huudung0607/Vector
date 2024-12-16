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
	int n;
	cin >> n;
	vector<pair<pair<int, int>, int>> a(n);
	for (int i = 0; i < n; i++)
	{
		int x, y, z;
		cin >> x >> y >> z;
		a[i].first.first = x;
		a[i].first.second = y;
		a[i].second = z;
	}
	for (int i = 0; i < n; i++)
	{
		int sum = a[i].first.first + a[i].first.second + a[i].second;
		cout << sum << " ";
	}
}
